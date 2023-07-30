# cutest-template

Eclipse Embedded CDT project template for the *cutest* C Unit-Testing Framework.

## Usage

* Grab a copy of this project (&rarr; [latest](../../archive/refs/heads/master.zip))
* Extract the archive into your target project (see [Example project](https://github.com/islandcontroller/cutest-example) for recommended setup!)
* Open Eclipse
    * &rarr; Import... &rarr; Existing Projects into Workspace
    * Select the `TEST_MyUnit` template project
* After import, you can rename the `TEST_...`-Project

### Automated Build Systems

A [Makefile](Makefile) is provided for building the test executable using an automated build system, such as Jenkins. Use it inside a [islandc/cutest](https://hub.docker.com/r/islandc/cutest) build container.

    - name: Run Unit-Test
      uses: docker://islandc/cutest
      with:
        args: /bin/sh -c "make all"

The project name can be overridden using an environment variable:

    PROJ_NAME=name make all

If you are referencing other projects outside the CuTest root, make sure to volume-mount the most top-level common folder, and `cd` to the CuTest root within the `cutest` container (see [cutest-example](https://github.com/islandcontroller/cutest-example/blob/master/.github/workflows/cutest-unit-tests.yml) action)

    - name: Run Unit-Test
      uses: docker://islandc/cutest
      with:
        args: /bin/sh -c "cd TEST_RV32CoreIdent && make all"

### GitHub Actions

A template job description is provided in [`cutest-action.yml`](cutest-action.yml).