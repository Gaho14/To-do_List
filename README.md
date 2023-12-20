# TasC_Manager
Small note : Keep in mind, I'm not very experienced ; I'll try to follow conventions but mistakes will surely happen. This is only a lil' personal project, not destined to be taken seriously c:

<b>(HEAVY WIP)</b>
<br/>Current state : <text style="color:red">Not functional</text> 
## Description
A small command-line To-do List, written in C. This allows the user to interact with (or create) a formatted JSON file ; allowing the basic CRUD operations :
- Create a task (WIP)
- Read one task, or view all tasks (WIP)
- Update a task (WIP)
- Delete a task (WIP)

## Compilation
Use the provided Makefile. (WIP)

## Use
General use :
`./tasc_manager fileToLoad fileToSave -c|-r|-u ID|-d ID`
- fileToLoad is the JSON File from which the data will be extracted.
- fileToSave is the file in which the updated data will be saved. Can be the same as fileToLoad ; which will overwrite the existing file.
- -c initiates a task-creating protocol, -r shows all tasks (for now), -u initiates a task-updating protocol, -d deletes a task.

## License
See [the LICENSE file](./LICENSE); basically, this project is placed under the MIT License.