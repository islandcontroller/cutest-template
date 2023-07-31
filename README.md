# cutest-template

Eclipse Embedded CDT project template for the *cutest* C Unit-Testing Framework.

## Usage

* Grab a copy of this project (&rarr; [latest](../../archive/refs/heads/master.zip))
* Extract the archive into your target project (see [Example project](https://github.com/islandcontroller/cutest-example) for recommended setup!)
* Open Eclipse
    * &rarr; Import... &rarr; Existing Projects into Workspace
    * Select the `TEST_MyUnit` template project
* After import, you can rename the `TEST_...`-Project

### Automated Testing

A [Makefile](Makefile) is provided for building and running the test executable CI/CD workflow, such as using *Jenkins* or *GitHub Actions*. Make the `all` build target inside a [islandc/cutest](https://hub.docker.com/r/islandc/cutest) build container:

    - name: Run Unit-Test
      uses: docker://islandc/cutest
      with:
        args: /bin/sh -c "make all"

The project name can be overridden using an environment variable:

    PROJ_NAME=name make all

If you are referencing other projects outside the CuTest root, make sure to workspace-mount the most top-level common folder, and `-C` to the CuTest root within the `cutest` container (see [cutest-example](https://github.com/islandcontroller/cutest-example/blob/master/.github/workflows/cutest-unit-tests.yml) action)

    - name: Run Unit-Test
      uses: docker://islandc/cutest
      with:
        args: /bin/sh -c "make all -C <project-location>"

### GitHub Actions

A template job description is provided in [`cutest-action.yml`](cutest-action.yml).