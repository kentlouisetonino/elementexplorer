## Redefinition of `add_new_line`

<br />

When you imported `add_new_line.c` in `app_description.c` <br />
then `app_description.c` is called inside the `main.c`, <br />
and `main.c` also imported the `add_new_line.c`, you <br />
will encounter the Redefinition error. <br />

<br />

To fix this issue, remove the imported `add_new_line.c` in <br />
`app_description.c`, then add a `void add_new_line(void);` <br />
function prototype in `app_description.c` to remove the <br />
implicit type warning. <br />
