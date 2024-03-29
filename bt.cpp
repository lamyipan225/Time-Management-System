/*
 * bt.cpp
 *
 */

#ifndef BT_CPP
#define BT_CPP


/* TODO
 * Goal: Do preorder traversal on the tree
 * Remark: print both value and key fields of each node
 */
template <typename T, typename K>
void BT<T,K>::preorder_traversal() const
{
    //write your codes here
	if (this->root)
	{
		cout << "Key: " << root->key << "\tValue: " << root->value << "\n";
		root->left->preorder_traversal();
		root->right->preorder_traversal();
	}
}


#endif /* BT_CPP */
