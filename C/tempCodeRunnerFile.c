uct node *delete (struct node *root, int data)
// {
//     if (root == NULL)
//         return root;
//     else if (data < root->data)
//     {
//         root->left = delete (root->left, data);
//     }

//     else if (data > root->data)
//         root->right = delete (root->left, data);
//     else
//     {
//         struct node *temp;
//         // temp = search(root, data);
//         if (temp->right == NULL && temp->left == NULL)
//         {
//             free(root);
//             temp = NULL;
//             return;
//         }
//     }
// }