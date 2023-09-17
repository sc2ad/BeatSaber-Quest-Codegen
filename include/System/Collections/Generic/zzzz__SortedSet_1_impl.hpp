#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Collections/Generic/zzzz__SortedSet_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__TreeWalkPredicate_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Collections/Generic/zzzz__NodeColor_def.hpp"
#include "System/Collections/Generic/zzzz__TreeRotation_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "UniqueCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "UnfoundCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__ElementCount::____System__Collections__Generic__SortedSet_1__ElementCount(int32_t UniqueCount, int32_t UnfoundCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->UniqueCount = UniqueCount;
this->UnfoundCount = UnfoundCount;
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__ElementCount::__set_UniqueCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__ElementCount::__get_UniqueCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__ElementCount::__set_UnfoundCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__ElementCount::__get_UnfoundCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)(T, ::System::Collections::Generic::NodeColor)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::NodeColor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.IsNonNullRed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::IsNonNullRed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "IsNonNullRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.IsNullOrBlack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::IsNullOrBlack)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "IsNullOrBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.set_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)(T)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::set_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.get_Left
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::get_Left)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "get_Left",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.set_Left
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::set_Left)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "set_Left",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.get_Right
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::get_Right)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "get_Right",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.set_Right
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::set_Right)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "set_Right",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.get_Color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::NodeColor (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::get_Color)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "get_Color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.set_Color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)(::System::Collections::Generic::NodeColor)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::set_Color)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "set_Color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::NodeColor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.get_IsBlack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::get_IsBlack)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "get_IsBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.get_IsRed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::get_IsRed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "get_IsRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.get_Is2Node
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::get_Is2Node)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "get_Is2Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.get_Is4Node
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::get_Is4Node)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "get_Is4Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.ColorBlack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::ColorBlack)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "ColorBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.ColorRed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::ColorRed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "ColorRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.GetRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::TreeRotation (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::GetRotation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "GetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.GetSibling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::GetSibling)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "GetSibling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.Split4Node
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::Split4Node)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "Split4Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.Rotate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)(::System::Collections::Generic::TreeRotation)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::Rotate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "Rotate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::TreeRotation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.RotateLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::RotateLeft)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "RotateLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.RotateLeftRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::RotateLeftRight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "RotateLeftRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.RotateRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::RotateRight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "RotateRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.RotateRightLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::RotateRightLeft)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "RotateRightLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.Merge2Nodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::Merge2Nodes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "Merge2Nodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node.ReplaceChild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::ReplaceChild)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "ReplaceChild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::__set__Item_k__BackingField(T value)  {
::cordl_internals::setInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::__get__Item_k__BackingField() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::__set__Left_k__BackingField(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>(value));
}
constexpr ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::__get__Left_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::__set__Right_k__BackingField(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>(value));
}
constexpr ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::__get__Right_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::__set__Color_k__BackingField(::System::Collections::Generic::NodeColor value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::NodeColor, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::NodeColor>(value));
}
constexpr ::System::Collections::Generic::NodeColor ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::__get__Color_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::NodeColor, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "item", ty: "T", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::System::Collections::Generic::NodeColor", modifiers: "", def_value: None }]
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::____System__Collections__Generic__SortedSet_1__Node(T item, ::System::Collections::Generic::NodeColor color)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Collections__Generic__SortedSet_1__Node>(item, color))) {}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::_ctor(T item, ::System::Collections::Generic::NodeColor color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::NodeColor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item, color);
}
 bool ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::IsNonNullRed(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "IsNonNullRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, node);
}
 bool ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::IsNullOrBlack(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "IsNullOrBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, node);
}
 T ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::get_Item()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::set_Item(T value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::get_Left()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "get_Left",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::set_Left(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "set_Left",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::get_Right()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "get_Right",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::set_Right(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "set_Right",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Collections::Generic::NodeColor ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::get_Color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "get_Color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::NodeColor, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::set_Color(::System::Collections::Generic::NodeColor value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "set_Color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::NodeColor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::get_IsBlack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "get_IsBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::get_IsRed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "get_IsRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::get_Is2Node()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "get_Is2Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::get_Is4Node()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "get_Is4Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::ColorBlack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "ColorBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::ColorRed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "ColorRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::TreeRotation ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::GetRotation(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> current, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> sibling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "GetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::TreeRotation, false>(const_cast<void*>(instance), ___internal_method, current, sibling);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::GetSibling(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "GetSibling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::Split4Node()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "Split4Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::Rotate(::System::Collections::Generic::TreeRotation rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "Rotate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::TreeRotation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method, rotation);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::RotateLeft()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "RotateLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::RotateLeftRight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "RotateLeftRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::RotateRight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "RotateRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::RotateRightLeft()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "RotateRightLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::Merge2Nodes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "Merge2Nodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node::ReplaceChild(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> child, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> newChild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node>::get(),
                            "ReplaceChild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, child, newChild);
}
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)(uint32_t, ::System::Collections::Generic::NodeColor)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::NodeColor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.IsNonNullRed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::IsNonNullRed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "IsNonNullRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.IsNullOrBlack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::IsNullOrBlack)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "IsNullOrBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.set_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)(uint32_t)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::set_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.get_Left
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::get_Left)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "get_Left",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.set_Left
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::set_Left)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "set_Left",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.get_Right
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::get_Right)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "get_Right",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.set_Right
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::set_Right)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "set_Right",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.get_Color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::NodeColor (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::get_Color)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "get_Color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.set_Color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)(::System::Collections::Generic::NodeColor)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::set_Color)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "set_Color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::NodeColor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.get_IsBlack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::get_IsBlack)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "get_IsBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.get_IsRed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::get_IsRed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "get_IsRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.get_Is2Node
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::get_Is2Node)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "get_Is2Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.get_Is4Node
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::get_Is4Node)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "get_Is4Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.ColorBlack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::ColorBlack)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "ColorBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.ColorRed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::ColorRed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "ColorRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.GetRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::TreeRotation (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::GetRotation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "GetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.GetSibling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::GetSibling)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "GetSibling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.Split4Node
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::Split4Node)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "Split4Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.Rotate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)(::System::Collections::Generic::TreeRotation)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::Rotate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "Rotate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::TreeRotation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.RotateLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::RotateLeft)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "RotateLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.RotateLeftRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::RotateLeftRight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "RotateLeftRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.RotateRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::RotateRight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "RotateRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.RotateRightLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::RotateRightLeft)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "RotateRightLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.Merge2Nodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::Merge2Nodes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "Merge2Nodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>.ReplaceChild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::ReplaceChild)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "ReplaceChild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::__set__Item_k__BackingField(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::__get__Item_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::__set__Left_k__BackingField(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>(value));
}
constexpr ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::__get__Left_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::__set__Right_k__BackingField(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>(value));
}
constexpr ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::__get__Right_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::__set__Color_k__BackingField(::System::Collections::Generic::NodeColor value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::NodeColor, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::NodeColor>(value));
}
constexpr ::System::Collections::Generic::NodeColor ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::__get__Color_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::NodeColor, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "item", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::System::Collections::Generic::NodeColor", modifiers: "", def_value: None }]
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::____System__Collections__Generic__SortedSet_1__Node(uint32_t item, ::System::Collections::Generic::NodeColor color)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Collections__Generic__SortedSet_1__Node>(item, color))) {}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::_ctor(uint32_t item, ::System::Collections::Generic::NodeColor color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::NodeColor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item, color);
}
 bool ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::IsNonNullRed(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "IsNonNullRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, node);
}
 bool ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::IsNullOrBlack(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "IsNullOrBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, node);
}
 uint32_t ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::get_Item()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::set_Item(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::get_Left()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "get_Left",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::set_Left(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "set_Left",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::get_Right()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "get_Right",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::set_Right(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "set_Right",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Collections::Generic::NodeColor ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::get_Color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "get_Color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::NodeColor, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::set_Color(::System::Collections::Generic::NodeColor value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "set_Color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::NodeColor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::get_IsBlack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "get_IsBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::get_IsRed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "get_IsRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::get_Is2Node()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "get_Is2Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::get_Is4Node()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "get_Is4Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::ColorBlack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "ColorBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::ColorRed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "ColorRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::TreeRotation ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::GetRotation(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> current, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> sibling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "GetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::TreeRotation, false>(const_cast<void*>(instance), ___internal_method, current, sibling);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::GetSibling(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "GetSibling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::Split4Node()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "Split4Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::Rotate(::System::Collections::Generic::TreeRotation rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "Rotate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::TreeRotation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, false>(const_cast<void*>(instance), ___internal_method, rotation);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::RotateLeft()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "RotateLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::RotateLeftRight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "RotateLeftRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::RotateRight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "RotateRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::RotateRightLeft()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "RotateRightLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::Merge2Nodes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "Merge2Nodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>::ReplaceChild(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> child, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> newChild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(),
                            "ReplaceChild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, child, newChild);
}
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::*)(::System::Collections::Generic::SortedSet_1<T>)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::*)(::System::Collections::Generic::SortedSet_1<T>, bool)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::*)(::bs_hook::Il2CppWrapperType)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<T>
constexpr  ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::operator ::System::Collections::Generic::IEnumerator_1<T>() const {
return ::System::Collections::Generic::IEnumerator_1<T>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::operator ::System::IDisposable() const {
return ::System::IDisposable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::operator ::System::Collections::IEnumerator() const {
return ::System::Collections::IEnumerator(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr  ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::operator ::System::Runtime::Serialization::ISerializable() const {
return ::System::Runtime::Serialization::ISerializable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr  ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::operator ::System::Runtime::Serialization::IDeserializationCallback() const {
return ::System::Runtime::Serialization::IDeserializationCallback(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_tree", ty: "::System::Collections::Generic::SortedSet_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_current", ty: "::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_reverse", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::____System__Collections__Generic__SortedSet_1__Enumerator(::System::Collections::Generic::SortedSet_1<T> _tree, int32_t _version, ::System::Collections::Generic::Stack_1<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>> _stack, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> _current, bool _reverse) noexcept : ::bs_hook::ValueTypeWrapper() {this->_tree = _tree;
this->_version = _version;
this->_stack = _stack;
this->_current = _current;
this->_reverse = _reverse;
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::__set_s_dummyNode(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, "s_dummyNode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get>(std::forward<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>(value));
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::__get_s_dummyNode()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, "s_dummyNode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get>();
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::__set__tree(::System::Collections::Generic::SortedSet_1<T> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::SortedSet_1<T>, 0x0>(this->__instance, std::forward<::System::Collections::Generic::SortedSet_1<T>>(value));
}
constexpr ::System::Collections::Generic::SortedSet_1<T> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::__get__tree() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::SortedSet_1<T>, 0x0>(this->__instance);
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::__set__version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::__get__version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::__set__stack(::System::Collections::Generic::Stack_1<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Stack_1<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>, 0x10>(this->__instance, std::forward<::System::Collections::Generic::Stack_1<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>>(value));
}
constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::__get__stack() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>, 0x10>(this->__instance);
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::__set__current(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, 0x18>(this->__instance, std::forward<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>(value));
}
constexpr ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::__get__current() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, 0x18>(this->__instance);
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::__set__reverse(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::__get__reverse() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->__instance);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::_ctor(::System::Collections::Generic::SortedSet_1<T> set)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, set);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::_ctor(::System::Collections::Generic::SortedSet_1<T> set, bool reverse)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, set, reverse);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, info, context);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, sender);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 T ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::*)(::System::Collections::Generic::SortedSet_1<uint32_t>)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::*)(::System::Collections::Generic::SortedSet_1<uint32_t>, bool)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::*)(::bs_hook::Il2CppWrapperType)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<uint32_t>
constexpr  ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::operator ::System::Collections::Generic::IEnumerator_1<uint32_t>() const {
return ::System::Collections::Generic::IEnumerator_1<uint32_t>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::operator ::System::IDisposable() const {
return ::System::IDisposable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::operator ::System::Collections::IEnumerator() const {
return ::System::Collections::IEnumerator(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr  ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::operator ::System::Runtime::Serialization::ISerializable() const {
return ::System::Runtime::Serialization::ISerializable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr  ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::operator ::System::Runtime::Serialization::IDeserializationCallback() const {
return ::System::Runtime::Serialization::IDeserializationCallback(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_tree", ty: "::System::Collections::Generic::SortedSet_1<uint32_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_current", ty: "::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_reverse", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::____System__Collections__Generic__SortedSet_1__Enumerator(::System::Collections::Generic::SortedSet_1<uint32_t> _tree, int32_t _version, ::System::Collections::Generic::Stack_1<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>> _stack, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> _current, bool _reverse) noexcept : ::bs_hook::ValueTypeWrapper() {this->_tree = _tree;
this->_version = _version;
this->_stack = _stack;
this->_current = _current;
this->_reverse = _reverse;
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::__set_s_dummyNode(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, "s_dummyNode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get>(std::forward<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>(value));
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::__get_s_dummyNode()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, "s_dummyNode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get>();
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::__set__tree(::System::Collections::Generic::SortedSet_1<uint32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::SortedSet_1<uint32_t>, 0x0>(this->__instance, std::forward<::System::Collections::Generic::SortedSet_1<uint32_t>>(value));
}
constexpr ::System::Collections::Generic::SortedSet_1<uint32_t> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::__get__tree() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::SortedSet_1<uint32_t>, 0x0>(this->__instance);
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::__set__version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::__get__version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::__set__stack(::System::Collections::Generic::Stack_1<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Stack_1<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>, 0x10>(this->__instance, std::forward<::System::Collections::Generic::Stack_1<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>>(value));
}
constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::__get__stack() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>, 0x10>(this->__instance);
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::__set__current(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, 0x18>(this->__instance, std::forward<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>(value));
}
constexpr ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::__get__current() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, 0x18>(this->__instance);
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::__set__reverse(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::__get__reverse() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->__instance);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::_ctor(::System::Collections::Generic::SortedSet_1<uint32_t> set)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, set);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::_ctor(::System::Collections::Generic::SortedSet_1<uint32_t> set, bool reverse)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, set, reverse);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, info, context);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, sender);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 uint32_t ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0._CopyTo_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0::*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0::_CopyTo_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0>::get(),
                            "<CopyTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0::__set_array(::ArrayW<T> value)  {
::cordl_internals::setInstanceField<::ArrayW<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<T>>(value));
}
constexpr ::ArrayW<T> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0::__get_array() const {
return ::cordl_internals::getInstanceField<::ArrayW<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0>())) {}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0::_CopyTo_b__0(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0>::get(),
                            "<CopyTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, node);
}
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t>._CopyTo_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t>::*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t>::_CopyTo_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t>>::get(),
                            "<CopyTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t>::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t>::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t>::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t>::__set_array(::ArrayW<uint32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint32_t>>(value));
}
constexpr ::ArrayW<uint32_t> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t>::__get_array() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t>::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0>())) {}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t>::_CopyTo_b__0(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass52_0<uint32_t>>::get(),
                            "<CopyTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, node);
}
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0._System_Collections_ICollection_CopyTo_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0::*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0::_System_Collections_ICollection_CopyTo_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0>::get(),
                            "<System.Collections.ICollection.CopyTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0::__set_objects(::ArrayW<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0::__get_objects() const {
return ::cordl_internals::getInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0>())) {}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0::_System_Collections_ICollection_CopyTo_b__0(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0>::get(),
                            "<System.Collections.ICollection.CopyTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, node);
}
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<uint32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<uint32_t>::*)()>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<uint32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<uint32_t>._System_Collections_ICollection_CopyTo_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<uint32_t>::*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>)>(&::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<uint32_t>::_System_Collections_ICollection_CopyTo_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<uint32_t>>::get(),
                            "<System.Collections.ICollection.CopyTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<uint32_t>::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<uint32_t>::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<uint32_t>::__set_objects(::ArrayW<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<uint32_t>::__get_objects() const {
return ::cordl_internals::getInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<uint32_t>::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0>())) {}
 void ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<uint32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<uint32_t>::_System_Collections_ICollection_CopyTo_b__0(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1____c__DisplayClass53_0<uint32_t>>::get(),
                            "<System.Collections.ICollection.CopyTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, node);
}
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1::*)()>(&::System::Collections::Generic::SortedSet_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Generic::SortedSet_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.InOrderTreeWalk
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1::*)(::System::Collections::Generic::TreeWalkPredicate_1<T>)>(&::System::Collections::Generic::SortedSet_1::InOrderTreeWalk)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::SortedSet_1::*)()>(&::System::Collections::Generic::SortedSet_1::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.get_Comparer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IComparer_1<T> (::System::Collections::Generic::SortedSet_1::*)()>(&::System::Collections::Generic::SortedSet_1::get_Comparer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "get_Comparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.System_Collections_Generic_ICollection_T__get_IsReadOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1::*)()>(&::System::Collections::Generic::SortedSet_1::System_Collections_Generic_ICollection_T__get_IsReadOnly)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "System.Collections.Generic.ICollection<T>.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.System_Collections_ICollection_get_IsSynchronized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1::*)()>(&::System::Collections::Generic::SortedSet_1::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.System_Collections_ICollection_get_SyncRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Collections::Generic::SortedSet_1::*)()>(&::System::Collections::Generic::SortedSet_1::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.VersionCheck
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1::*)()>(&::System::Collections::Generic::SortedSet_1::VersionCheck)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.IsWithinRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1::*)(T)>(&::System::Collections::Generic::SortedSet_1::IsWithinRange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1::*)(T)>(&::System::Collections::Generic::SortedSet_1::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.System_Collections_Generic_ICollection_T__Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1::*)(T)>(&::System::Collections::Generic::SortedSet_1::System_Collections_Generic_ICollection_T__Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "System.Collections.Generic.ICollection<T>.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.AddIfNotPresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1::*)(T)>(&::System::Collections::Generic::SortedSet_1::AddIfNotPresent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1::*)(T)>(&::System::Collections::Generic::SortedSet_1::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.DoRemove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1::*)(T)>(&::System::Collections::Generic::SortedSet_1::DoRemove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1::*)()>(&::System::Collections::Generic::SortedSet_1::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1::*)(T)>(&::System::Collections::Generic::SortedSet_1::Contains)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1::*)(::ArrayW<T>, int32_t)>(&::System::Collections::Generic::SortedSet_1::CopyTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1::*)(::ArrayW<T>, int32_t, int32_t)>(&::System::Collections::Generic::SortedSet_1::CopyTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.System_Collections_ICollection_CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1::*)(::System::Array, int32_t)>(&::System::Collections::Generic::SortedSet_1::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<T> (::System::Collections::Generic::SortedSet_1::*)()>(&::System::Collections::Generic::SortedSet_1::GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.System_Collections_Generic_IEnumerable_T__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<T> (::System::Collections::Generic::SortedSet_1::*)()>(&::System::Collections::Generic::SortedSet_1::System_Collections_Generic_IEnumerable_T__GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::System::Collections::Generic::SortedSet_1::*)()>(&::System::Collections::Generic::SortedSet_1::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.InsertionBalance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1::*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, ByRef<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>)>(&::System::Collections::Generic::SortedSet_1::InsertionBalance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "InsertionBalance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.ReplaceChildOrRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1::*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>)>(&::System::Collections::Generic::SortedSet_1::ReplaceChildOrRoot)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "ReplaceChildOrRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.ReplaceNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1::*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>)>(&::System::Collections::Generic::SortedSet_1::ReplaceNode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "ReplaceNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.FindNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> (::System::Collections::Generic::SortedSet_1::*)(T)>(&::System::Collections::Generic::SortedSet_1::FindNode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.InternalIndexOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::SortedSet_1::*)(T)>(&::System::Collections::Generic::SortedSet_1::InternalIndexOf)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.HasEqualComparer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1::*)(::System::Collections::Generic::SortedSet_1<T>)>(&::System::Collections::Generic::SortedSet_1::HasEqualComparer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "HasEqualComparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.SetEquals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1::*)(::System::Collections::Generic::IEnumerable_1<T>)>(&::System::Collections::Generic::SortedSet_1::SetEquals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "SetEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.CheckUniqueAndUnfoundElements
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__ElementCount<T> (::System::Collections::Generic::SortedSet_1::*)(::System::Collections::Generic::IEnumerable_1<T>, bool)>(&::System::Collections::Generic::SortedSet_1::CheckUniqueAndUnfoundElements)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "CheckUniqueAndUnfoundElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Generic::SortedSet_1::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Generic::SortedSet_1::GetObjectData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1::*)(::bs_hook::Il2CppWrapperType)>(&::System::Collections::Generic::SortedSet_1::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.OnDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1::*)(::bs_hook::Il2CppWrapperType)>(&::System::Collections::Generic::SortedSet_1::OnDeserialization)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1.Log2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Collections::Generic::SortedSet_1::Log2)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "Log2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::ICollection_1<T>
constexpr  ::System::Collections::Generic::SortedSet_1::operator ::System::Collections::Generic::ICollection_1<T>() const noexcept {
return ::System::Collections::Generic::ICollection_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<T>
constexpr  ::System::Collections::Generic::SortedSet_1::operator ::System::Collections::Generic::IEnumerable_1<T>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::System::Collections::Generic::SortedSet_1::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::ICollection
constexpr  ::System::Collections::Generic::SortedSet_1::operator ::System::Collections::ICollection() const noexcept {
return ::System::Collections::ICollection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr  ::System::Collections::Generic::SortedSet_1::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>() const noexcept {
return ::System::Collections::Generic::IReadOnlyCollection_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr  ::System::Collections::Generic::SortedSet_1::operator ::System::Runtime::Serialization::ISerializable() const noexcept {
return ::System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr  ::System::Collections::Generic::SortedSet_1::operator ::System::Runtime::Serialization::IDeserializationCallback() const noexcept {
return ::System::Runtime::Serialization::IDeserializationCallback(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::SortedSet_1::__set_root(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>(value));
}
constexpr ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> ::System::Collections::Generic::SortedSet_1::__get_root() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::SortedSet_1::__set_comparer(::System::Collections::Generic::IComparer_1<T> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IComparer_1<T>>(value));
}
constexpr ::System::Collections::Generic::IComparer_1<T> ::System::Collections::Generic::SortedSet_1::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::SortedSet_1::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Collections::Generic::SortedSet_1::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::SortedSet_1::__set_version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Collections::Generic::SortedSet_1::__get_version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::SortedSet_1::__set__syncRoot(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Collections::Generic::SortedSet_1::__get__syncRoot() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::SortedSet_1::__set_siInfo(::System::Runtime::Serialization::SerializationInfo value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::SerializationInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Serialization::SerializationInfo>(value));
}
constexpr ::System::Runtime::Serialization::SerializationInfo ::System::Collections::Generic::SortedSet_1::__get_siInfo() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::SerializationInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Collections::Generic::SortedSet_1::SortedSet_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SortedSet_1>())) {}
 void ::System::Collections::Generic::SortedSet_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 ::System::Collections::Generic::SortedSet_1::SortedSet_1(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SortedSet_1>(info, context))) {}
 void ::System::Collections::Generic::SortedSet_1::_ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 bool ::System::Collections::Generic::SortedSet_1::InOrderTreeWalk(::System::Collections::Generic::TreeWalkPredicate_1<T> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "InOrderTreeWalk",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::TreeWalkPredicate_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, action);
}
 int32_t ::System::Collections::Generic::SortedSet_1::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IComparer_1<T> ::System::Collections::Generic::SortedSet_1::get_Comparer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "get_Comparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IComparer_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Collections::Generic::SortedSet_1::System_Collections_Generic_ICollection_T__get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "System.Collections.Generic.ICollection<T>.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Collections::Generic::SortedSet_1::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::Collections::Generic::SortedSet_1::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Collections::Generic::SortedSet_1::VersionCheck()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "VersionCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Collections::Generic::SortedSet_1::IsWithinRange(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "IsWithinRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool ::System::Collections::Generic::SortedSet_1::Add(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void ::System::Collections::Generic::SortedSet_1::System_Collections_Generic_ICollection_T__Add(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "System.Collections.Generic.ICollection<T>.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool ::System::Collections::Generic::SortedSet_1::AddIfNotPresent(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "AddIfNotPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool ::System::Collections::Generic::SortedSet_1::Remove(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool ::System::Collections::Generic::SortedSet_1::DoRemove(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "DoRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void ::System::Collections::Generic::SortedSet_1::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Collections::Generic::SortedSet_1::Contains(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void ::System::Collections::Generic::SortedSet_1::CopyTo(::ArrayW<T> array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 void ::System::Collections::Generic::SortedSet_1::CopyTo(::ArrayW<T> array, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index, count);
}
 void ::System::Collections::Generic::SortedSet_1::System_Collections_ICollection_CopyTo(::System::Array array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<T> ::System::Collections::Generic::SortedSet_1::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerator_1<T> ::System::Collections::Generic::SortedSet_1::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::System::Collections::Generic::SortedSet_1::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Collections::Generic::SortedSet_1::InsertionBalance(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> current, ByRef<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>> parent, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> grandParent, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> greatGrandParent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "InsertionBalance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, current, parent, grandParent, greatGrandParent);
}
 void ::System::Collections::Generic::SortedSet_1::ReplaceChildOrRoot(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> parent, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> child, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> newChild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "ReplaceChildOrRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parent, child, newChild);
}
 void ::System::Collections::Generic::SortedSet_1::ReplaceNode(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> match, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> parentOfMatch, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> successor, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> parentOfSuccessor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "ReplaceNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, match, parentOfMatch, successor, parentOfSuccessor);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T> ::System::Collections::Generic::SortedSet_1::FindNode(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "FindNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<T>, false>(const_cast<void*>(instance), ___internal_method, item);
}
 int32_t ::System::Collections::Generic::SortedSet_1::InternalIndexOf(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "InternalIndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool ::System::Collections::Generic::SortedSet_1::HasEqualComparer(::System::Collections::Generic::SortedSet_1<T> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "HasEqualComparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 bool ::System::Collections::Generic::SortedSet_1::SetEquals(::System::Collections::Generic::IEnumerable_1<T> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "SetEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__ElementCount<T> ::System::Collections::Generic::SortedSet_1::CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<T> other, bool returnIfUnfound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "CheckUniqueAndUnfoundElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__ElementCount<T>, false>(const_cast<void*>(instance), ___internal_method, other, returnIfUnfound);
}
 void ::System::Collections::Generic::SortedSet_1::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 void ::System::Collections::Generic::SortedSet_1::GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 void ::System::Collections::Generic::SortedSet_1::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sender);
}
 void ::System::Collections::Generic::SortedSet_1::OnDeserialization(::bs_hook::Il2CppWrapperType sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sender);
}
 int32_t ::System::Collections::Generic::SortedSet_1::Log2(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                            "Log2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.InOrderTreeWalk
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Collections::Generic::TreeWalkPredicate_1<uint32_t>)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::InOrderTreeWalk)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1<uint32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.get_Comparer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IComparer_1<uint32_t> (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::get_Comparer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "get_Comparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.System_Collections_Generic_ICollection_T__get_IsReadOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_Generic_ICollection_T__get_IsReadOnly)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "System.Collections.Generic.ICollection<T>.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.System_Collections_ICollection_get_IsSynchronized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.System_Collections_ICollection_get_SyncRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.VersionCheck
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::VersionCheck)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1<uint32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.IsWithinRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(uint32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::IsWithinRange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1<uint32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(uint32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.System_Collections_Generic_ICollection_T__Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(uint32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_Generic_ICollection_T__Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "System.Collections.Generic.ICollection<T>.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.AddIfNotPresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(uint32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::AddIfNotPresent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1<uint32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(uint32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.DoRemove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(uint32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::DoRemove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1<uint32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1<uint32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(uint32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::Contains)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1<uint32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::ArrayW<uint32_t>, int32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::CopyTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::ArrayW<uint32_t>, int32_t, int32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::CopyTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.System_Collections_ICollection_CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Array, int32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t> (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.System_Collections_Generic_IEnumerable_T__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<uint32_t> (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_Generic_IEnumerable_T__GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.InsertionBalance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, ByRef<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::InsertionBalance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "InsertionBalance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.ReplaceChildOrRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::ReplaceChildOrRoot)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "ReplaceChildOrRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.ReplaceNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::ReplaceNode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "ReplaceNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.FindNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(uint32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::FindNode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1<uint32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.InternalIndexOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(uint32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::InternalIndexOf)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1<uint32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.HasEqualComparer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Collections::Generic::SortedSet_1<uint32_t>)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::HasEqualComparer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "HasEqualComparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.SetEquals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Collections::Generic::IEnumerable_1<uint32_t>)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::SetEquals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "SetEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.CheckUniqueAndUnfoundElements
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__ElementCount<uint32_t> (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Collections::Generic::IEnumerable_1<uint32_t>, bool)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::CheckUniqueAndUnfoundElements)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "CheckUniqueAndUnfoundElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::GetObjectData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1<uint32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::bs_hook::Il2CppWrapperType)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.OnDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::bs_hook::Il2CppWrapperType)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::OnDeserialization)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::SortedSet_1<uint32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.Log2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::Log2)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "Log2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::ICollection_1<uint32_t>
constexpr  ::System::Collections::Generic::SortedSet_1<uint32_t>::operator ::System::Collections::Generic::ICollection_1<uint32_t>() const noexcept {
return ::System::Collections::Generic::ICollection_1<uint32_t>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<uint32_t>
constexpr  ::System::Collections::Generic::SortedSet_1<uint32_t>::operator ::System::Collections::Generic::IEnumerable_1<uint32_t>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<uint32_t>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::System::Collections::Generic::SortedSet_1<uint32_t>::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::ICollection
constexpr  ::System::Collections::Generic::SortedSet_1<uint32_t>::operator ::System::Collections::ICollection() const noexcept {
return ::System::Collections::ICollection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>
constexpr  ::System::Collections::Generic::SortedSet_1<uint32_t>::operator ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>() const noexcept {
return ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr  ::System::Collections::Generic::SortedSet_1<uint32_t>::operator ::System::Runtime::Serialization::ISerializable() const noexcept {
return ::System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr  ::System::Collections::Generic::SortedSet_1<uint32_t>::operator ::System::Runtime::Serialization::IDeserializationCallback() const noexcept {
return ::System::Runtime::Serialization::IDeserializationCallback(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::SortedSet_1<uint32_t>::__set_root(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>(value));
}
constexpr ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> ::System::Collections::Generic::SortedSet_1<uint32_t>::__get_root() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::SortedSet_1<uint32_t>::__set_comparer(::System::Collections::Generic::IComparer_1<uint32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<uint32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IComparer_1<uint32_t>>(value));
}
constexpr ::System::Collections::Generic::IComparer_1<uint32_t> ::System::Collections::Generic::SortedSet_1<uint32_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<uint32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::SortedSet_1<uint32_t>::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Collections::Generic::SortedSet_1<uint32_t>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::SortedSet_1<uint32_t>::__set_version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Collections::Generic::SortedSet_1<uint32_t>::__get_version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::SortedSet_1<uint32_t>::__set__syncRoot(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Collections::Generic::SortedSet_1<uint32_t>::__get__syncRoot() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::Generic::SortedSet_1<uint32_t>::__set_siInfo(::System::Runtime::Serialization::SerializationInfo value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::SerializationInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Serialization::SerializationInfo>(value));
}
constexpr ::System::Runtime::Serialization::SerializationInfo ::System::Collections::Generic::SortedSet_1<uint32_t>::__get_siInfo() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::SerializationInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Collections::Generic::SortedSet_1<uint32_t>::SortedSet_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SortedSet_1>())) {}
 void ::System::Collections::Generic::SortedSet_1<uint32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 ::System::Collections::Generic::SortedSet_1<uint32_t>::SortedSet_1(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SortedSet_1>(info, context))) {}
 void ::System::Collections::Generic::SortedSet_1<uint32_t>::_ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 bool ::System::Collections::Generic::SortedSet_1<uint32_t>::InOrderTreeWalk(::System::Collections::Generic::TreeWalkPredicate_1<uint32_t> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "InOrderTreeWalk",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::TreeWalkPredicate_1<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, action);
}
 int32_t ::System::Collections::Generic::SortedSet_1<uint32_t>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IComparer_1<uint32_t> ::System::Collections::Generic::SortedSet_1<uint32_t>::get_Comparer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "get_Comparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IComparer_1<uint32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_Generic_ICollection_T__get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "System.Collections.Generic.ICollection<T>.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Collections::Generic::SortedSet_1<uint32_t>::VersionCheck()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "VersionCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Collections::Generic::SortedSet_1<uint32_t>::IsWithinRange(uint32_t item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "IsWithinRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool ::System::Collections::Generic::SortedSet_1<uint32_t>::Add(uint32_t item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void ::System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_Generic_ICollection_T__Add(uint32_t item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "System.Collections.Generic.ICollection<T>.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool ::System::Collections::Generic::SortedSet_1<uint32_t>::AddIfNotPresent(uint32_t item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "AddIfNotPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool ::System::Collections::Generic::SortedSet_1<uint32_t>::Remove(uint32_t item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool ::System::Collections::Generic::SortedSet_1<uint32_t>::DoRemove(uint32_t item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "DoRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void ::System::Collections::Generic::SortedSet_1<uint32_t>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Collections::Generic::SortedSet_1<uint32_t>::Contains(uint32_t item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void ::System::Collections::Generic::SortedSet_1<uint32_t>::CopyTo(::ArrayW<uint32_t> array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 void ::System::Collections::Generic::SortedSet_1<uint32_t>::CopyTo(::ArrayW<uint32_t> array, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index, count);
}
 void ::System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_ICollection_CopyTo(::System::Array array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t> ::System::Collections::Generic::SortedSet_1<uint32_t>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Enumerator<uint32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerator_1<uint32_t> ::System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<uint32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Collections::Generic::SortedSet_1<uint32_t>::InsertionBalance(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> current, ByRef<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>> parent, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> grandParent, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> greatGrandParent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "InsertionBalance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, current, parent, grandParent, greatGrandParent);
}
 void ::System::Collections::Generic::SortedSet_1<uint32_t>::ReplaceChildOrRoot(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> parent, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> child, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> newChild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "ReplaceChildOrRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parent, child, newChild);
}
 void ::System::Collections::Generic::SortedSet_1<uint32_t>::ReplaceNode(::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> match, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> parentOfMatch, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> successor, ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> parentOfSuccessor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "ReplaceNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, match, parentOfMatch, successor, parentOfSuccessor);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t> ::System::Collections::Generic::SortedSet_1<uint32_t>::FindNode(uint32_t item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "FindNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__Node<uint32_t>, false>(const_cast<void*>(instance), ___internal_method, item);
}
 int32_t ::System::Collections::Generic::SortedSet_1<uint32_t>::InternalIndexOf(uint32_t item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "InternalIndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool ::System::Collections::Generic::SortedSet_1<uint32_t>::HasEqualComparer(::System::Collections::Generic::SortedSet_1<uint32_t> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "HasEqualComparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 bool ::System::Collections::Generic::SortedSet_1<uint32_t>::SetEquals(::System::Collections::Generic::IEnumerable_1<uint32_t> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "SetEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 ::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__ElementCount<uint32_t> ::System::Collections::Generic::SortedSet_1<uint32_t>::CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<uint32_t> other, bool returnIfUnfound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "CheckUniqueAndUnfoundElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::____System__Collections__Generic__SortedSet_1__ElementCount<uint32_t>, false>(const_cast<void*>(instance), ___internal_method, other, returnIfUnfound);
}
 void ::System::Collections::Generic::SortedSet_1<uint32_t>::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 void ::System::Collections::Generic::SortedSet_1<uint32_t>::GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 void ::System::Collections::Generic::SortedSet_1<uint32_t>::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sender);
}
 void ::System::Collections::Generic::SortedSet_1<uint32_t>::OnDeserialization(::bs_hook::Il2CppWrapperType sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sender);
}
 int32_t ::System::Collections::Generic::SortedSet_1<uint32_t>::Log2(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>>::get(),
                            "Log2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
} // end anonymous namespace
