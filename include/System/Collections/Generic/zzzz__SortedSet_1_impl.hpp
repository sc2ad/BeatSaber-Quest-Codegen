#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Collections/Generic/zzzz__SortedSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Collections/Generic/zzzz__SortedSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__TreeWalkPredicate_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__NodeColor_def.hpp"
#include "System/Collections/Generic/zzzz__TreeRotation_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
// Ctor Parameters [CppParam { name: "UniqueCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "UnfoundCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::System__Collections__Generic__SortedSet_1__ElementCount::System__Collections__Generic__SortedSet_1__ElementCount(int32_t UniqueCount, int32_t UnfoundCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->UniqueCount = UniqueCount;
this->UnfoundCount = UnfoundCount;
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1__ElementCount::__set_UniqueCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Generic::System__Collections__Generic__SortedSet_1__ElementCount::__get_UniqueCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1__ElementCount::__set_UnfoundCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Generic::System__Collections__Generic__SortedSet_1__ElementCount::__get_UnfoundCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::__set__Item_k__BackingField(T value)  {
::cordl_internals::setInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::__get__Item_k__BackingField() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::__set__Left_k__BackingField(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>(value));
}
constexpr System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::__get__Left_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::__set__Right_k__BackingField(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>(value));
}
constexpr System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::__get__Right_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::__set__Color_k__BackingField(System::Collections::Generic::NodeColor value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::NodeColor, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::NodeColor>(value));
}
constexpr System::Collections::Generic::NodeColor System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::__get__Color_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::NodeColor, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::New_ctor(T item, System::Collections::Generic::NodeColor color)  {
System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>(item, color))};
return o;
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::_ctor(T item, System::Collections::Generic::NodeColor color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::NodeColor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item, color);
}
 bool System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::IsNonNullRed(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "IsNonNullRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, node);
}
 bool System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::IsNullOrBlack(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "IsNullOrBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, node);
}
 T System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::get_Item()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::set_Item(T value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::get_Left()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "get_Left",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::set_Left(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "set_Left",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::get_Right()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "get_Right",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::set_Right(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "set_Right",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::Generic::NodeColor System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::get_Color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "get_Color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::NodeColor, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::set_Color(System::Collections::Generic::NodeColor value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "set_Color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::NodeColor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::get_IsBlack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "get_IsBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::get_IsRed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "get_IsRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::get_Is2Node()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "get_Is2Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::get_Is4Node()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "get_Is4Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::ColorBlack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "ColorBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::ColorRed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "ColorRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::TreeRotation System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::GetRotation(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> current, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> sibling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "GetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::TreeRotation, false>(const_cast<void*>(instance), ___internal_method, current, sibling);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::GetSibling(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "GetSibling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::Split4Node()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "Split4Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::Rotate(System::Collections::Generic::TreeRotation rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "Rotate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::TreeRotation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method, rotation);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::RotateLeft()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "RotateLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::RotateLeftRight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "RotateLeftRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::RotateRight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "RotateRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::RotateRightLeft()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "RotateRightLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::Merge2Nodes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "Merge2Nodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::ReplaceChild(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> child, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> newChild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "ReplaceChild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, child, newChild);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::__set__Item_k__BackingField(T value)  {
::cordl_internals::setInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::__get__Item_k__BackingField() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::__set__Left_k__BackingField(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>(value));
}
constexpr System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::__get__Left_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::__set__Right_k__BackingField(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>(value));
}
constexpr System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::__get__Right_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::__set__Color_k__BackingField(System::Collections::Generic::NodeColor value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::NodeColor, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::NodeColor>(value));
}
constexpr System::Collections::Generic::NodeColor System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::__get__Color_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::NodeColor, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::New_ctor(T item, System::Collections::Generic::NodeColor color)  {
System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>(item, color))};
return o;
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::_ctor(T item, System::Collections::Generic::NodeColor color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::NodeColor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item, color);
}
 bool System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::IsNonNullRed(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "IsNonNullRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, node);
}
 bool System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::IsNullOrBlack(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "IsNullOrBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, node);
}
 T System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::get_Item()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::set_Item(T value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::get_Left()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "get_Left",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::set_Left(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "set_Left",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::get_Right()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "get_Right",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::set_Right(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "set_Right",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::Generic::NodeColor System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::get_Color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "get_Color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::NodeColor, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::set_Color(System::Collections::Generic::NodeColor value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "set_Color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::NodeColor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::get_IsBlack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "get_IsBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::get_IsRed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "get_IsRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::get_Is2Node()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "get_Is2Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::get_Is4Node()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "get_Is4Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::ColorBlack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "ColorBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::ColorRed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "ColorRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::TreeRotation System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::GetRotation(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> current, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> sibling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "GetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::TreeRotation, false>(const_cast<void*>(instance), ___internal_method, current, sibling);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::GetSibling(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "GetSibling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::Split4Node()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "Split4Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::Rotate(System::Collections::Generic::TreeRotation rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "Rotate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::TreeRotation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method, rotation);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::RotateLeft()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "RotateLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::RotateLeftRight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "RotateLeftRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::RotateRight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "RotateRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::RotateRightLeft()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "RotateRightLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::Merge2Nodes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "Merge2Nodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>::ReplaceChild(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> child, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> newChild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(),
                            "ReplaceChild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, child, newChild);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr  System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::operator System::Collections::Generic::IEnumerator_1<T>() const {
return System::Collections::Generic::IEnumerator_1<T>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IDisposable
constexpr  System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::operator System::IDisposable() const {
return System::IDisposable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::operator System::Collections::IEnumerator() const {
return System::Collections::IEnumerator(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr  System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::operator System::Runtime::Serialization::ISerializable() const {
return System::Runtime::Serialization::ISerializable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr  System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::operator System::Runtime::Serialization::IDeserializationCallback() const {
return System::Runtime::Serialization::IDeserializationCallback(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_tree", ty: "System::Collections::Generic::SortedSet_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_stack", ty: "System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_current", ty: "System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_reverse", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::System__Collections__Generic__SortedSet_1__Enumerator(System::Collections::Generic::SortedSet_1<T> _tree, int32_t _version, System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>> _stack, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> _current, bool _reverse) noexcept : ::bs_hook::ValueTypeWrapper() {this->_tree = _tree;
this->_version = _version;
this->_stack = _stack;
this->_current = _current;
this->_reverse = _reverse;
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__set_s_dummyNode(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, "s_dummyNode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get>(std::forward<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>(value));
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__get_s_dummyNode()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, "s_dummyNode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get>();
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__set__tree(System::Collections::Generic::SortedSet_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::SortedSet_1<T>, 0x0>(this->__instance, std::forward<System::Collections::Generic::SortedSet_1<T>>(value));
}
constexpr System::Collections::Generic::SortedSet_1<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__get__tree() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::SortedSet_1<T>, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__set__version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__get__version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__set__stack(System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>, 0x10>(this->__instance, std::forward<System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>>(value));
}
constexpr System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__get__stack() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>, 0x10>(this->__instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__set__current(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, 0x18>(this->__instance, std::forward<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>(value));
}
constexpr System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__get__current() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, 0x18>(this->__instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__set__reverse(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__get__reverse() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->__instance);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::_ctor(System::Collections::Generic::SortedSet_1<T> set)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::SortedSet_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, set);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::_ctor(System::Collections::Generic::SortedSet_1<T> set, bool reverse)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::SortedSet_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, set, reverse);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, info, context);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, sender);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 T System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr  System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::operator System::Collections::Generic::IEnumerator_1<T>() const {
return System::Collections::Generic::IEnumerator_1<T>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IDisposable
constexpr  System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::operator System::IDisposable() const {
return System::IDisposable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::operator System::Collections::IEnumerator() const {
return System::Collections::IEnumerator(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr  System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::operator System::Runtime::Serialization::ISerializable() const {
return System::Runtime::Serialization::ISerializable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr  System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::operator System::Runtime::Serialization::IDeserializationCallback() const {
return System::Runtime::Serialization::IDeserializationCallback(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_tree", ty: "System::Collections::Generic::SortedSet_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_stack", ty: "System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_current", ty: "System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_reverse", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::System__Collections__Generic__SortedSet_1__Enumerator(System::Collections::Generic::SortedSet_1<T> _tree, int32_t _version, System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>> _stack, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> _current, bool _reverse) noexcept : ::bs_hook::ValueTypeWrapper() {this->_tree = _tree;
this->_version = _version;
this->_stack = _stack;
this->_current = _current;
this->_reverse = _reverse;
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__set_s_dummyNode(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, "s_dummyNode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get>(std::forward<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>(value));
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__get_s_dummyNode()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, "s_dummyNode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get>();
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__set__tree(System::Collections::Generic::SortedSet_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::SortedSet_1<T>, 0x0>(this->__instance, std::forward<System::Collections::Generic::SortedSet_1<T>>(value));
}
constexpr System::Collections::Generic::SortedSet_1<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__get__tree() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::SortedSet_1<T>, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__set__version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__get__version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__set__stack(System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>, 0x10>(this->__instance, std::forward<System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>>(value));
}
constexpr System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__get__stack() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Stack_1<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>, 0x10>(this->__instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__set__current(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, 0x18>(this->__instance, std::forward<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>(value));
}
constexpr System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__get__current() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, 0x18>(this->__instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__set__reverse(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::__get__reverse() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->__instance);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::_ctor(System::Collections::Generic::SortedSet_1<T> set)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::SortedSet_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, set);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::_ctor(System::Collections::Generic::SortedSet_1<T> set, bool reverse)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::SortedSet_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, set, reverse);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, info, context);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, sender);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 T System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>::__set_array(::ArrayW<T> value)  {
::cordl_internals::setInstanceField<::ArrayW<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<T>>(value));
}
constexpr ::ArrayW<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>::__get_array() const {
return ::cordl_internals::getInstanceField<::ArrayW<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>::New_ctor()  {
System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>>())};
return o;
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>::_CopyTo_b__0(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>>::get(),
                            "<CopyTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, node);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>::__set_array(::ArrayW<T> value)  {
::cordl_internals::setInstanceField<::ArrayW<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<T>>(value));
}
constexpr ::ArrayW<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>::__get_array() const {
return ::cordl_internals::getInstanceField<::ArrayW<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>::New_ctor()  {
System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>>())};
return o;
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>::_CopyTo_b__0(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<T>>::get(),
                            "<CopyTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, node);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>::__set_objects(::ArrayW<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>::__get_objects() const {
return ::cordl_internals::getInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>::New_ctor()  {
System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>>())};
return o;
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>::_System_Collections_ICollection_CopyTo_b__0(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>>::get(),
                            "<System.Collections.ICollection.CopyTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, node);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>::__set_objects(::ArrayW<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>::__get_objects() const {
return ::cordl_internals::getInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T> System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>::New_ctor()  {
System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>>())};
return o;
}
 void System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>::_System_Collections_ICollection_CopyTo_b__0(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<T>>::get(),
                            "<System.Collections.ICollection.CopyTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, node);
}
/// @brief Convert operator to System::Collections::Generic::ICollection_1<T>
constexpr  System::Collections::Generic::SortedSet_1<T>::operator System::Collections::Generic::ICollection_1<T>() const noexcept {
return System::Collections::Generic::ICollection_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr  System::Collections::Generic::SortedSet_1<T>::operator System::Collections::Generic::IEnumerable_1<T>() const noexcept {
return System::Collections::Generic::IEnumerable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::Collections::Generic::SortedSet_1<T>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::ICollection
constexpr  System::Collections::Generic::SortedSet_1<T>::operator System::Collections::ICollection() const noexcept {
return System::Collections::ICollection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr  System::Collections::Generic::SortedSet_1<T>::operator System::Collections::Generic::IReadOnlyCollection_1<T>() const noexcept {
return System::Collections::Generic::IReadOnlyCollection_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr  System::Collections::Generic::SortedSet_1<T>::operator System::Runtime::Serialization::ISerializable() const noexcept {
return System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr  System::Collections::Generic::SortedSet_1<T>::operator System::Runtime::Serialization::IDeserializationCallback() const noexcept {
return System::Runtime::Serialization::IDeserializationCallback(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::SortedSet_1<T>::__set_root(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>(value));
}
constexpr System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::SortedSet_1<T>::__get_root() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::SortedSet_1<T>::__set_comparer(System::Collections::Generic::IComparer_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IComparer_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IComparer_1<T>>(value));
}
constexpr System::Collections::Generic::IComparer_1<T> System::Collections::Generic::SortedSet_1<T>::__get_comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IComparer_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::SortedSet_1<T>::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Generic::SortedSet_1<T>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::SortedSet_1<T>::__set_version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Generic::SortedSet_1<T>::__get_version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::SortedSet_1<T>::__set__syncRoot(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Collections::Generic::SortedSet_1<T>::__get__syncRoot() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::SortedSet_1<T>::__set_siInfo(System::Runtime::Serialization::SerializationInfo value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::SerializationInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::SerializationInfo>(value));
}
constexpr System::Runtime::Serialization::SerializationInfo System::Collections::Generic::SortedSet_1<T>::__get_siInfo() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::SerializationInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::SortedSet_1<T> System::Collections::Generic::SortedSet_1<T>::New_ctor()  {
System::Collections::Generic::SortedSet_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Generic::SortedSet_1<T>>())};
return o;
}
 void System::Collections::Generic::SortedSet_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::SortedSet_1<T> System::Collections::Generic::SortedSet_1<T>::New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
System::Collections::Generic::SortedSet_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Generic::SortedSet_1<T>>(info, context))};
return o;
}
 void System::Collections::Generic::SortedSet_1<T>::_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 bool System::Collections::Generic::SortedSet_1<T>::InOrderTreeWalk(System::Collections::Generic::TreeWalkPredicate_1<T> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "InOrderTreeWalk",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::TreeWalkPredicate_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, action);
}
 int32_t System::Collections::Generic::SortedSet_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IComparer_1<T> System::Collections::Generic::SortedSet_1<T>::get_Comparer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "get_Comparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IComparer_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Generic::SortedSet_1<T>::System_Collections_Generic_ICollection_T__get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "System.Collections.Generic.ICollection<T>.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Generic::SortedSet_1<T>::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Generic::SortedSet_1<T>::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Generic::SortedSet_1<T>::VersionCheck()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "VersionCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Generic::SortedSet_1<T>::IsWithinRange(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "IsWithinRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool System::Collections::Generic::SortedSet_1<T>::Add(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void System::Collections::Generic::SortedSet_1<T>::System_Collections_Generic_ICollection_T__Add(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "System.Collections.Generic.ICollection<T>.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool System::Collections::Generic::SortedSet_1<T>::AddIfNotPresent(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "AddIfNotPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool System::Collections::Generic::SortedSet_1<T>::Remove(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool System::Collections::Generic::SortedSet_1<T>::DoRemove(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "DoRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void System::Collections::Generic::SortedSet_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Generic::SortedSet_1<T>::Contains(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void System::Collections::Generic::SortedSet_1<T>::CopyTo(::ArrayW<T> array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 void System::Collections::Generic::SortedSet_1<T>::CopyTo(::ArrayW<T> array, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index, count);
}
 void System::Collections::Generic::SortedSet_1<T>::System_Collections_ICollection_CopyTo(System::Array array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T> System::Collections::Generic::SortedSet_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<T> System::Collections::Generic::SortedSet_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator System::Collections::Generic::SortedSet_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Generic::SortedSet_1<T>::InsertionBalance(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> current, ByRef<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>> parent, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> grandParent, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> greatGrandParent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "InsertionBalance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, current, parent, grandParent, greatGrandParent);
}
 void System::Collections::Generic::SortedSet_1<T>::ReplaceChildOrRoot(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> parent, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> child, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> newChild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "ReplaceChildOrRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parent, child, newChild);
}
 void System::Collections::Generic::SortedSet_1<T>::ReplaceNode(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> match, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> parentOfMatch, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> successor, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> parentOfSuccessor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "ReplaceNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, match, parentOfMatch, successor, parentOfSuccessor);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::SortedSet_1<T>::FindNode(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "FindNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method, item);
}
 int32_t System::Collections::Generic::SortedSet_1<T>::InternalIndexOf(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "InternalIndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool System::Collections::Generic::SortedSet_1<T>::HasEqualComparer(System::Collections::Generic::SortedSet_1<T> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "HasEqualComparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::SortedSet_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 bool System::Collections::Generic::SortedSet_1<T>::SetEquals(System::Collections::Generic::IEnumerable_1<T> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "SetEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__ElementCount<T> System::Collections::Generic::SortedSet_1<T>::CheckUniqueAndUnfoundElements(System::Collections::Generic::IEnumerable_1<T> other, bool returnIfUnfound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "CheckUniqueAndUnfoundElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__ElementCount<T>, false>(const_cast<void*>(instance), ___internal_method, other, returnIfUnfound);
}
 void System::Collections::Generic::SortedSet_1<T>::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 void System::Collections::Generic::SortedSet_1<T>::GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 void System::Collections::Generic::SortedSet_1<T>::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sender);
}
 void System::Collections::Generic::SortedSet_1<T>::OnDeserialization(::bs_hook::Il2CppWrapperType sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sender);
}
 int32_t System::Collections::Generic::SortedSet_1<T>::Log2(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "Log2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
/// @brief Convert operator to System::Collections::Generic::ICollection_1<T>
constexpr  System::Collections::Generic::SortedSet_1<T>::operator System::Collections::Generic::ICollection_1<T>() const noexcept {
return System::Collections::Generic::ICollection_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr  System::Collections::Generic::SortedSet_1<T>::operator System::Collections::Generic::IEnumerable_1<T>() const noexcept {
return System::Collections::Generic::IEnumerable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::Collections::Generic::SortedSet_1<T>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::ICollection
constexpr  System::Collections::Generic::SortedSet_1<T>::operator System::Collections::ICollection() const noexcept {
return System::Collections::ICollection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr  System::Collections::Generic::SortedSet_1<T>::operator System::Collections::Generic::IReadOnlyCollection_1<T>() const noexcept {
return System::Collections::Generic::IReadOnlyCollection_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr  System::Collections::Generic::SortedSet_1<T>::operator System::Runtime::Serialization::ISerializable() const noexcept {
return System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr  System::Collections::Generic::SortedSet_1<T>::operator System::Runtime::Serialization::IDeserializationCallback() const noexcept {
return System::Runtime::Serialization::IDeserializationCallback(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::SortedSet_1<T>::__set_root(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>(value));
}
constexpr System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::SortedSet_1<T>::__get_root() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::SortedSet_1<T>::__set_comparer(System::Collections::Generic::IComparer_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IComparer_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IComparer_1<T>>(value));
}
constexpr System::Collections::Generic::IComparer_1<T> System::Collections::Generic::SortedSet_1<T>::__get_comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IComparer_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::SortedSet_1<T>::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Generic::SortedSet_1<T>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::SortedSet_1<T>::__set_version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Generic::SortedSet_1<T>::__get_version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::SortedSet_1<T>::__set__syncRoot(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Collections::Generic::SortedSet_1<T>::__get__syncRoot() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Generic::SortedSet_1<T>::__set_siInfo(System::Runtime::Serialization::SerializationInfo value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::SerializationInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::SerializationInfo>(value));
}
constexpr System::Runtime::Serialization::SerializationInfo System::Collections::Generic::SortedSet_1<T>::__get_siInfo() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::SerializationInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::SortedSet_1<T> System::Collections::Generic::SortedSet_1<T>::New_ctor()  {
System::Collections::Generic::SortedSet_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Generic::SortedSet_1<T>>())};
return o;
}
 void System::Collections::Generic::SortedSet_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::SortedSet_1<T> System::Collections::Generic::SortedSet_1<T>::New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
System::Collections::Generic::SortedSet_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Generic::SortedSet_1<T>>(info, context))};
return o;
}
 void System::Collections::Generic::SortedSet_1<T>::_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 bool System::Collections::Generic::SortedSet_1<T>::InOrderTreeWalk(System::Collections::Generic::TreeWalkPredicate_1<T> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "InOrderTreeWalk",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::TreeWalkPredicate_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, action);
}
 int32_t System::Collections::Generic::SortedSet_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IComparer_1<T> System::Collections::Generic::SortedSet_1<T>::get_Comparer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "get_Comparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IComparer_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Generic::SortedSet_1<T>::System_Collections_Generic_ICollection_T__get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "System.Collections.Generic.ICollection<T>.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Generic::SortedSet_1<T>::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Generic::SortedSet_1<T>::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Generic::SortedSet_1<T>::VersionCheck()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "VersionCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Generic::SortedSet_1<T>::IsWithinRange(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "IsWithinRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool System::Collections::Generic::SortedSet_1<T>::Add(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void System::Collections::Generic::SortedSet_1<T>::System_Collections_Generic_ICollection_T__Add(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "System.Collections.Generic.ICollection<T>.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool System::Collections::Generic::SortedSet_1<T>::AddIfNotPresent(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "AddIfNotPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool System::Collections::Generic::SortedSet_1<T>::Remove(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool System::Collections::Generic::SortedSet_1<T>::DoRemove(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "DoRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void System::Collections::Generic::SortedSet_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Generic::SortedSet_1<T>::Contains(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void System::Collections::Generic::SortedSet_1<T>::CopyTo(::ArrayW<T> array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 void System::Collections::Generic::SortedSet_1<T>::CopyTo(::ArrayW<T> array, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index, count);
}
 void System::Collections::Generic::SortedSet_1<T>::System_Collections_ICollection_CopyTo(System::Array array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T> System::Collections::Generic::SortedSet_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Enumerator<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<T> System::Collections::Generic::SortedSet_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator System::Collections::Generic::SortedSet_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Generic::SortedSet_1<T>::InsertionBalance(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> current, ByRef<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>> parent, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> grandParent, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> greatGrandParent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "InsertionBalance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, current, parent, grandParent, greatGrandParent);
}
 void System::Collections::Generic::SortedSet_1<T>::ReplaceChildOrRoot(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> parent, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> child, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> newChild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "ReplaceChildOrRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parent, child, newChild);
}
 void System::Collections::Generic::SortedSet_1<T>::ReplaceNode(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> match, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> parentOfMatch, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> successor, System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> parentOfSuccessor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "ReplaceNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, match, parentOfMatch, successor, parentOfSuccessor);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> System::Collections::Generic::SortedSet_1<T>::FindNode(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "FindNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method, item);
}
 int32_t System::Collections::Generic::SortedSet_1<T>::InternalIndexOf(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "InternalIndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool System::Collections::Generic::SortedSet_1<T>::HasEqualComparer(System::Collections::Generic::SortedSet_1<T> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "HasEqualComparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::SortedSet_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 bool System::Collections::Generic::SortedSet_1<T>::SetEquals(System::Collections::Generic::IEnumerable_1<T> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "SetEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 System::Collections::Generic::System__Collections__Generic__SortedSet_1__ElementCount<T> System::Collections::Generic::SortedSet_1<T>::CheckUniqueAndUnfoundElements(System::Collections::Generic::IEnumerable_1<T> other, bool returnIfUnfound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "CheckUniqueAndUnfoundElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::System__Collections__Generic__SortedSet_1__ElementCount<T>, false>(const_cast<void*>(instance), ___internal_method, other, returnIfUnfound);
}
 void System::Collections::Generic::SortedSet_1<T>::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 void System::Collections::Generic::SortedSet_1<T>::GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 void System::Collections::Generic::SortedSet_1<T>::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sender);
}
 void System::Collections::Generic::SortedSet_1<T>::OnDeserialization(::bs_hook::Il2CppWrapperType sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sender);
}
 int32_t System::Collections::Generic::SortedSet_1<T>::Log2(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SortedSet_1<T>>::get(),
                            "Log2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
