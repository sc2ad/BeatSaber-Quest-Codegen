#pragma once
#include "UnityEngine/ProBuilder/KdTree/zzzz__KdTreeNode_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
constexpr void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>::__set_Point(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>::__get_Point() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>::__set_Value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TValue>(value));
}
constexpr TValue UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>::__get_Value() const {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>::__set_Duplicates(System::Collections::Generic::List_1<TValue> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<TValue>>(value));
}
constexpr System::Collections::Generic::List_1<TValue> UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>::__get_Duplicates() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>::__set_LeftChild(UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue> value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>>(value));
}
constexpr UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue> UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>::__get_LeftChild() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>::__set_RightChild(UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue> value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>>(value));
}
constexpr UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue> UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>::__get_RightChild() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue> UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>::New_ctor()  {
UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>>())};
return o;
}
 void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue> UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>::New_ctor(::ArrayW<float_t> point, TValue value)  {
UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>>(point, value))};
return o;
}
 void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>::_ctor(::ArrayW<float_t> point, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, point, value);
}
 UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue> UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>::get_Item(int32_t compare)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>, false>(const_cast<void*>(instance), ___internal_method, compare);
}
 void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>::set_Item(int32_t compare, UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, compare, value);
}
 bool UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>::get_IsLeaf()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>>::get(),
                            "get_IsLeaf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>::AddDuplicate(TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>>::get(),
                            "AddDuplicate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>::__set_Point(::ArrayW<TKey> value)  {
::cordl_internals::setInstanceField<::ArrayW<TKey>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<TKey>>(value));
}
constexpr ::ArrayW<TKey> UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>::__get_Point() const {
return ::cordl_internals::getInstanceField<::ArrayW<TKey>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>::__set_Value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TValue>(value));
}
constexpr TValue UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>::__get_Value() const {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>::__set_Duplicates(System::Collections::Generic::List_1<TValue> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<TValue>>(value));
}
constexpr System::Collections::Generic::List_1<TValue> UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>::__get_Duplicates() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>::__set_LeftChild(UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>(value));
}
constexpr UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>::__get_LeftChild() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>::__set_RightChild(UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>(value));
}
constexpr UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>::__get_RightChild() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>::New_ctor()  {
UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>())};
return o;
}
 void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>::New_ctor(::ArrayW<TKey> point, TValue value)  {
UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>(point, value))};
return o;
}
 void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>::_ctor(::ArrayW<TKey> point, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, point, value);
}
 UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>::get_Item(int32_t compare)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>, false>(const_cast<void*>(instance), ___internal_method, compare);
}
 void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>::set_Item(int32_t compare, UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, compare, value);
}
 bool UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>::get_IsLeaf()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get(),
                            "get_IsLeaf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>::AddDuplicate(TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get(),
                            "AddDuplicate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
