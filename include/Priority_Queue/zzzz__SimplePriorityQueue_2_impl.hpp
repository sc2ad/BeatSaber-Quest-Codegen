#pragma once
#include "Priority_Queue/zzzz__GenericPriorityQueueNode_1_impl.hpp"
namespace {
#include "Priority_Queue/zzzz__SimplePriorityQueue_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "Priority_Queue/zzzz__GenericPriorityQueue_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "Priority_Queue/zzzz__IPriorityQueue_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
//  Writing Method size for method: ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode.get_Data
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TItem (::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::*)()>(&::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::get_Data)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode>::get(),
                            "get_Data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode.set_Data
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::*)(TItem)>(&::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::set_Data)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode>::get(),
                            "set_Data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::*)(TItem)>(&::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::__set__Data_k__BackingField(TItem value)  {
::cordl_internals::setInstanceField<TItem, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TItem>(value));
}
constexpr TItem ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::__get__Data_k__BackingField() const {
return ::cordl_internals::getInstanceField<TItem, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 TItem ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::get_Data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode>::get(),
                            "get_Data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::set_Data(TItem value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode>::get(),
                            "set_Data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "data", ty: "TItem", modifiers: "", def_value: None }]
 ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::____Priority_Queue__SimplePriorityQueue_2__SimpleNode(TItem data)  : ::Priority_Queue::GenericPriorityQueueNode_1<TPriority>(THROW_UNLESS(::il2cpp_utils::New<____Priority_Queue__SimplePriorityQueue_2__SimpleNode>(data))) {}
 void ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::_ctor(TItem data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
//  Writing Method size for method: ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode.get_Data
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TItem (::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::*)()>(&::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::get_Data)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode>::get(),
                            "get_Data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode.set_Data
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::*)(TItem)>(&::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::set_Data)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode>::get(),
                            "set_Data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::*)(TItem)>(&::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::__set__Data_k__BackingField(TItem value)  {
::cordl_internals::setInstanceField<TItem, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TItem>(value));
}
constexpr TItem ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::__get__Data_k__BackingField() const {
return ::cordl_internals::getInstanceField<TItem, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 TItem ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::get_Data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode>::get(),
                            "get_Data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::set_Data(TItem value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode>::get(),
                            "set_Data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "data", ty: "TItem", modifiers: "", def_value: None }]
 ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::____Priority_Queue__SimplePriorityQueue_2__SimpleNode(TItem data)  : ::Priority_Queue::GenericPriorityQueueNode_1<float_t>(THROW_UNLESS(::il2cpp_utils::New<____Priority_Queue__SimplePriorityQueue_2__SimpleNode>(data))) {}
 void ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode::_ctor(TItem data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)()>(&::Priority_Queue::SimplePriorityQueue_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)(::System::Collections::Generic::IComparer_1<TPriority>)>(&::Priority_Queue::SimplePriorityQueue_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TPriority>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)(::System::Comparison_1<TPriority>)>(&::Priority_Queue::SimplePriorityQueue_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<TPriority>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)(::System::Collections::Generic::IEqualityComparer_1<TItem>)>(&::Priority_Queue::SimplePriorityQueue_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TItem>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)(::System::Collections::Generic::IComparer_1<TPriority>, ::System::Collections::Generic::IEqualityComparer_1<TItem>)>(&::Priority_Queue::SimplePriorityQueue_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TPriority>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TItem>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)(::System::Comparison_1<TPriority>, ::System::Collections::Generic::IEqualityComparer_1<TItem>)>(&::Priority_Queue::SimplePriorityQueue_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<TPriority>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TItem>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.GetExistingNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority> (::Priority_Queue::SimplePriorityQueue_2::*)(TItem)>(&::Priority_Queue::SimplePriorityQueue_2::GetExistingNode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "GetExistingNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.AddToNodeCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)(::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>)>(&::Priority_Queue::SimplePriorityQueue_2::AddToNodeCache)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "AddToNodeCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.RemoveFromNodeCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)(::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>)>(&::Priority_Queue::SimplePriorityQueue_2::RemoveFromNodeCache)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "RemoveFromNodeCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Priority_Queue::SimplePriorityQueue_2::*)()>(&::Priority_Queue::SimplePriorityQueue_2::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.get_First
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TItem (::Priority_Queue::SimplePriorityQueue_2::*)()>(&::Priority_Queue::SimplePriorityQueue_2::get_First)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "get_First",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)()>(&::Priority_Queue::SimplePriorityQueue_2::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Priority_Queue::SimplePriorityQueue_2::*)(TItem)>(&::Priority_Queue::SimplePriorityQueue_2::Contains)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.Dequeue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TItem (::Priority_Queue::SimplePriorityQueue_2::*)()>(&::Priority_Queue::SimplePriorityQueue_2::Dequeue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "Dequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.EnqueueNoLockOrCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority> (::Priority_Queue::SimplePriorityQueue_2::*)(TItem, TPriority)>(&::Priority_Queue::SimplePriorityQueue_2::EnqueueNoLockOrCache)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "EnqueueNoLockOrCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.Enqueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)(TItem, TPriority)>(&::Priority_Queue::SimplePriorityQueue_2::Enqueue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.EnqueueWithoutDuplicates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Priority_Queue::SimplePriorityQueue_2::*)(TItem, TPriority)>(&::Priority_Queue::SimplePriorityQueue_2::EnqueueWithoutDuplicates)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "EnqueueWithoutDuplicates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)(TItem)>(&::Priority_Queue::SimplePriorityQueue_2::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.UpdatePriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)(TItem, TPriority)>(&::Priority_Queue::SimplePriorityQueue_2::UpdatePriority)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "UpdatePriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.GetPriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TPriority (::Priority_Queue::SimplePriorityQueue_2::*)(TItem)>(&::Priority_Queue::SimplePriorityQueue_2::GetPriority)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "GetPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.TryFirst
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Priority_Queue::SimplePriorityQueue_2::*)(ByRef<TItem>)>(&::Priority_Queue::SimplePriorityQueue_2::TryFirst)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "TryFirst",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TItem>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.TryDequeue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Priority_Queue::SimplePriorityQueue_2::*)(ByRef<TItem>)>(&::Priority_Queue::SimplePriorityQueue_2::TryDequeue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "TryDequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TItem>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.TryRemove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Priority_Queue::SimplePriorityQueue_2::*)(TItem)>(&::Priority_Queue::SimplePriorityQueue_2::TryRemove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "TryRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.TryUpdatePriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Priority_Queue::SimplePriorityQueue_2::*)(TItem, TPriority)>(&::Priority_Queue::SimplePriorityQueue_2::TryUpdatePriority)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "TryUpdatePriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.TryGetPriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Priority_Queue::SimplePriorityQueue_2::*)(TItem, ByRef<TPriority>)>(&::Priority_Queue::SimplePriorityQueue_2::TryGetPriority)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "TryGetPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TPriority>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<TItem> (::Priority_Queue::SimplePriorityQueue_2::*)()>(&::Priority_Queue::SimplePriorityQueue_2::GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::Priority_Queue::SimplePriorityQueue_2::*)()>(&::Priority_Queue::SimplePriorityQueue_2::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.IsValidQueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Priority_Queue::SimplePriorityQueue_2::*)()>(&::Priority_Queue::SimplePriorityQueue_2::IsValidQueue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "IsValidQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Priority_Queue::IPriorityQueue_2<TItem,TPriority>
constexpr  ::Priority_Queue::SimplePriorityQueue_2::operator ::Priority_Queue::IPriorityQueue_2<TItem,TPriority>() const noexcept {
return ::Priority_Queue::IPriorityQueue_2<TItem,TPriority>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<TItem>
constexpr  ::Priority_Queue::SimplePriorityQueue_2::operator ::System::Collections::Generic::IEnumerable_1<TItem>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<TItem>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::Priority_Queue::SimplePriorityQueue_2::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Priority_Queue::SimplePriorityQueue_2::__set__queue(::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>,TPriority> value)  {
::cordl_internals::setInstanceField<::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>,TPriority>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>,TPriority>>(value));
}
constexpr ::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>,TPriority> ::Priority_Queue::SimplePriorityQueue_2::__get__queue() const {
return ::cordl_internals::getInstanceField<::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>,TPriority>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Priority_Queue::SimplePriorityQueue_2::__set__itemToNodesCache(::System::Collections::Generic::Dictionary_2<TItem,::System::Collections::Generic::IList_1<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<TItem,::System::Collections::Generic::IList_1<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<TItem,::System::Collections::Generic::IList_1<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>>>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<TItem,::System::Collections::Generic::IList_1<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>>> ::Priority_Queue::SimplePriorityQueue_2::__get__itemToNodesCache() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<TItem,::System::Collections::Generic::IList_1<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Priority_Queue::SimplePriorityQueue_2::__set__nullNodesCache(::System::Collections::Generic::IList_1<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IList_1<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IList_1<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>>>(value));
}
constexpr ::System::Collections::Generic::IList_1<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>> ::Priority_Queue::SimplePriorityQueue_2::__get__nullNodesCache() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IList_1<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Priority_Queue::SimplePriorityQueue_2::SimplePriorityQueue_2()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SimplePriorityQueue_2>())) {}
 void ::Priority_Queue::SimplePriorityQueue_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "priorityComparer", ty: "::System::Collections::Generic::IComparer_1<TPriority>", modifiers: "", def_value: None }]
 ::Priority_Queue::SimplePriorityQueue_2::SimplePriorityQueue_2(::System::Collections::Generic::IComparer_1<TPriority> priorityComparer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SimplePriorityQueue_2>(priorityComparer))) {}
 void ::Priority_Queue::SimplePriorityQueue_2::_ctor(::System::Collections::Generic::IComparer_1<TPriority> priorityComparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TPriority>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, priorityComparer);
}
// Ctor Parameters [CppParam { name: "priorityComparer", ty: "::System::Comparison_1<TPriority>", modifiers: "", def_value: None }]
 ::Priority_Queue::SimplePriorityQueue_2::SimplePriorityQueue_2(::System::Comparison_1<TPriority> priorityComparer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SimplePriorityQueue_2>(priorityComparer))) {}
 void ::Priority_Queue::SimplePriorityQueue_2::_ctor(::System::Comparison_1<TPriority> priorityComparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<TPriority>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, priorityComparer);
}
// Ctor Parameters [CppParam { name: "itemEquality", ty: "::System::Collections::Generic::IEqualityComparer_1<TItem>", modifiers: "", def_value: None }]
 ::Priority_Queue::SimplePriorityQueue_2::SimplePriorityQueue_2(::System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SimplePriorityQueue_2>(itemEquality))) {}
 void ::Priority_Queue::SimplePriorityQueue_2::_ctor(::System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, itemEquality);
}
// Ctor Parameters [CppParam { name: "priorityComparer", ty: "::System::Collections::Generic::IComparer_1<TPriority>", modifiers: "", def_value: None }, CppParam { name: "itemEquality", ty: "::System::Collections::Generic::IEqualityComparer_1<TItem>", modifiers: "", def_value: None }]
 ::Priority_Queue::SimplePriorityQueue_2::SimplePriorityQueue_2(::System::Collections::Generic::IComparer_1<TPriority> priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SimplePriorityQueue_2>(priorityComparer, itemEquality))) {}
 void ::Priority_Queue::SimplePriorityQueue_2::_ctor(::System::Collections::Generic::IComparer_1<TPriority> priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TPriority>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, priorityComparer, itemEquality);
}
// Ctor Parameters [CppParam { name: "priorityComparer", ty: "::System::Comparison_1<TPriority>", modifiers: "", def_value: None }, CppParam { name: "itemEquality", ty: "::System::Collections::Generic::IEqualityComparer_1<TItem>", modifiers: "", def_value: None }]
 ::Priority_Queue::SimplePriorityQueue_2::SimplePriorityQueue_2(::System::Comparison_1<TPriority> priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SimplePriorityQueue_2>(priorityComparer, itemEquality))) {}
 void ::Priority_Queue::SimplePriorityQueue_2::_ctor(::System::Comparison_1<TPriority> priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<TPriority>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, priorityComparer, itemEquality);
}
 ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority> ::Priority_Queue::SimplePriorityQueue_2::GetExistingNode(TItem item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "GetExistingNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void ::Priority_Queue::SimplePriorityQueue_2::AddToNodeCache(::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "AddToNodeCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void ::Priority_Queue::SimplePriorityQueue_2::RemoveFromNodeCache(::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "RemoveFromNodeCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 int32_t ::Priority_Queue::SimplePriorityQueue_2::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 TItem ::Priority_Queue::SimplePriorityQueue_2::get_First()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "get_First",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Priority_Queue::SimplePriorityQueue_2::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Priority_Queue::SimplePriorityQueue_2::Contains(TItem item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 TItem ::Priority_Queue::SimplePriorityQueue_2::Dequeue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "Dequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority> ::Priority_Queue::SimplePriorityQueue_2::EnqueueNoLockOrCache(TItem item, TPriority priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "EnqueueNoLockOrCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>, false>(const_cast<void*>(instance), ___internal_method, item, priority);
}
 void ::Priority_Queue::SimplePriorityQueue_2::Enqueue(TItem item, TPriority priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item, priority);
}
 bool ::Priority_Queue::SimplePriorityQueue_2::EnqueueWithoutDuplicates(TItem item, TPriority priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "EnqueueWithoutDuplicates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item, priority);
}
 void ::Priority_Queue::SimplePriorityQueue_2::Remove(TItem item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void ::Priority_Queue::SimplePriorityQueue_2::UpdatePriority(TItem item, TPriority priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "UpdatePriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item, priority);
}
 TPriority ::Priority_Queue::SimplePriorityQueue_2::GetPriority(TItem item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "GetPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TPriority, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool ::Priority_Queue::SimplePriorityQueue_2::TryFirst(ByRef<TItem> first)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "TryFirst",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, first);
}
 bool ::Priority_Queue::SimplePriorityQueue_2::TryDequeue(ByRef<TItem> first)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "TryDequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, first);
}
 bool ::Priority_Queue::SimplePriorityQueue_2::TryRemove(TItem item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "TryRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool ::Priority_Queue::SimplePriorityQueue_2::TryUpdatePriority(TItem item, TPriority priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "TryUpdatePriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item, priority);
}
 bool ::Priority_Queue::SimplePriorityQueue_2::TryGetPriority(TItem item, ByRef<TPriority> priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "TryGetPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TPriority>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item, priority);
}
 ::System::Collections::Generic::IEnumerator_1<TItem> ::Priority_Queue::SimplePriorityQueue_2::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TItem>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::Priority_Queue::SimplePriorityQueue_2::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Priority_Queue::SimplePriorityQueue_2::IsValidQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "IsValidQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)()>(&::Priority_Queue::SimplePriorityQueue_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)(::System::Collections::Generic::IComparer_1<float_t>)>(&::Priority_Queue::SimplePriorityQueue_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)(::System::Comparison_1<float_t>)>(&::Priority_Queue::SimplePriorityQueue_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)(::System::Collections::Generic::IEqualityComparer_1<TItem>)>(&::Priority_Queue::SimplePriorityQueue_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TItem>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)(::System::Collections::Generic::IComparer_1<float_t>, ::System::Collections::Generic::IEqualityComparer_1<TItem>)>(&::Priority_Queue::SimplePriorityQueue_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TItem>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)(::System::Comparison_1<float_t>, ::System::Collections::Generic::IEqualityComparer_1<TItem>)>(&::Priority_Queue::SimplePriorityQueue_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TItem>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.GetExistingNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t> (::Priority_Queue::SimplePriorityQueue_2::*)(TItem)>(&::Priority_Queue::SimplePriorityQueue_2::GetExistingNode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "GetExistingNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.AddToNodeCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)(::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>)>(&::Priority_Queue::SimplePriorityQueue_2::AddToNodeCache)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "AddToNodeCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.RemoveFromNodeCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)(::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>)>(&::Priority_Queue::SimplePriorityQueue_2::RemoveFromNodeCache)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "RemoveFromNodeCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Priority_Queue::SimplePriorityQueue_2::*)()>(&::Priority_Queue::SimplePriorityQueue_2::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.get_First
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TItem (::Priority_Queue::SimplePriorityQueue_2::*)()>(&::Priority_Queue::SimplePriorityQueue_2::get_First)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "get_First",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)()>(&::Priority_Queue::SimplePriorityQueue_2::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Priority_Queue::SimplePriorityQueue_2::*)(TItem)>(&::Priority_Queue::SimplePriorityQueue_2::Contains)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.Dequeue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TItem (::Priority_Queue::SimplePriorityQueue_2::*)()>(&::Priority_Queue::SimplePriorityQueue_2::Dequeue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "Dequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.EnqueueNoLockOrCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t> (::Priority_Queue::SimplePriorityQueue_2::*)(TItem, float_t)>(&::Priority_Queue::SimplePriorityQueue_2::EnqueueNoLockOrCache)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "EnqueueNoLockOrCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.Enqueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)(TItem, float_t)>(&::Priority_Queue::SimplePriorityQueue_2::Enqueue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.EnqueueWithoutDuplicates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Priority_Queue::SimplePriorityQueue_2::*)(TItem, float_t)>(&::Priority_Queue::SimplePriorityQueue_2::EnqueueWithoutDuplicates)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "EnqueueWithoutDuplicates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)(TItem)>(&::Priority_Queue::SimplePriorityQueue_2::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.UpdatePriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_2::*)(TItem, float_t)>(&::Priority_Queue::SimplePriorityQueue_2::UpdatePriority)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "UpdatePriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.GetPriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Priority_Queue::SimplePriorityQueue_2::*)(TItem)>(&::Priority_Queue::SimplePriorityQueue_2::GetPriority)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "GetPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.TryFirst
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Priority_Queue::SimplePriorityQueue_2::*)(ByRef<TItem>)>(&::Priority_Queue::SimplePriorityQueue_2::TryFirst)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "TryFirst",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TItem>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.TryDequeue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Priority_Queue::SimplePriorityQueue_2::*)(ByRef<TItem>)>(&::Priority_Queue::SimplePriorityQueue_2::TryDequeue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "TryDequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TItem>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.TryRemove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Priority_Queue::SimplePriorityQueue_2::*)(TItem)>(&::Priority_Queue::SimplePriorityQueue_2::TryRemove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "TryRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.TryUpdatePriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Priority_Queue::SimplePriorityQueue_2::*)(TItem, float_t)>(&::Priority_Queue::SimplePriorityQueue_2::TryUpdatePriority)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "TryUpdatePriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.TryGetPriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Priority_Queue::SimplePriorityQueue_2::*)(TItem, ByRef<float_t>)>(&::Priority_Queue::SimplePriorityQueue_2::TryGetPriority)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "TryGetPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<TItem> (::Priority_Queue::SimplePriorityQueue_2::*)()>(&::Priority_Queue::SimplePriorityQueue_2::GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::Priority_Queue::SimplePriorityQueue_2::*)()>(&::Priority_Queue::SimplePriorityQueue_2::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_2.IsValidQueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Priority_Queue::SimplePriorityQueue_2::*)()>(&::Priority_Queue::SimplePriorityQueue_2::IsValidQueue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "IsValidQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Priority_Queue::IPriorityQueue_2<TItem,float_t>
constexpr  ::Priority_Queue::SimplePriorityQueue_2::operator ::Priority_Queue::IPriorityQueue_2<TItem,float_t>() const noexcept {
return ::Priority_Queue::IPriorityQueue_2<TItem,float_t>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<TItem>
constexpr  ::Priority_Queue::SimplePriorityQueue_2::operator ::System::Collections::Generic::IEnumerable_1<TItem>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<TItem>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::Priority_Queue::SimplePriorityQueue_2::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Priority_Queue::SimplePriorityQueue_2::__set__queue(::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>,float_t> value)  {
::cordl_internals::setInstanceField<::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>,float_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>,float_t>>(value));
}
constexpr ::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>,float_t> ::Priority_Queue::SimplePriorityQueue_2::__get__queue() const {
return ::cordl_internals::getInstanceField<::Priority_Queue::GenericPriorityQueue_2<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>,float_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Priority_Queue::SimplePriorityQueue_2::__set__itemToNodesCache(::System::Collections::Generic::Dictionary_2<TItem,::System::Collections::Generic::IList_1<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<TItem,::System::Collections::Generic::IList_1<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<TItem,::System::Collections::Generic::IList_1<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>>>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<TItem,::System::Collections::Generic::IList_1<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>>> ::Priority_Queue::SimplePriorityQueue_2::__get__itemToNodesCache() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<TItem,::System::Collections::Generic::IList_1<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Priority_Queue::SimplePriorityQueue_2::__set__nullNodesCache(::System::Collections::Generic::IList_1<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IList_1<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IList_1<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>>>(value));
}
constexpr ::System::Collections::Generic::IList_1<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>> ::Priority_Queue::SimplePriorityQueue_2::__get__nullNodesCache() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IList_1<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Priority_Queue::SimplePriorityQueue_2::SimplePriorityQueue_2()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SimplePriorityQueue_2>())) {}
 void ::Priority_Queue::SimplePriorityQueue_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "priorityComparer", ty: "::System::Collections::Generic::IComparer_1<float_t>", modifiers: "", def_value: None }]
 ::Priority_Queue::SimplePriorityQueue_2::SimplePriorityQueue_2(::System::Collections::Generic::IComparer_1<float_t> priorityComparer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SimplePriorityQueue_2>(priorityComparer))) {}
 void ::Priority_Queue::SimplePriorityQueue_2::_ctor(::System::Collections::Generic::IComparer_1<float_t> priorityComparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, priorityComparer);
}
// Ctor Parameters [CppParam { name: "priorityComparer", ty: "::System::Comparison_1<float_t>", modifiers: "", def_value: None }]
 ::Priority_Queue::SimplePriorityQueue_2::SimplePriorityQueue_2(::System::Comparison_1<float_t> priorityComparer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SimplePriorityQueue_2>(priorityComparer))) {}
 void ::Priority_Queue::SimplePriorityQueue_2::_ctor(::System::Comparison_1<float_t> priorityComparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, priorityComparer);
}
// Ctor Parameters [CppParam { name: "itemEquality", ty: "::System::Collections::Generic::IEqualityComparer_1<TItem>", modifiers: "", def_value: None }]
 ::Priority_Queue::SimplePriorityQueue_2::SimplePriorityQueue_2(::System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SimplePriorityQueue_2>(itemEquality))) {}
 void ::Priority_Queue::SimplePriorityQueue_2::_ctor(::System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, itemEquality);
}
// Ctor Parameters [CppParam { name: "priorityComparer", ty: "::System::Collections::Generic::IComparer_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "itemEquality", ty: "::System::Collections::Generic::IEqualityComparer_1<TItem>", modifiers: "", def_value: None }]
 ::Priority_Queue::SimplePriorityQueue_2::SimplePriorityQueue_2(::System::Collections::Generic::IComparer_1<float_t> priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SimplePriorityQueue_2>(priorityComparer, itemEquality))) {}
 void ::Priority_Queue::SimplePriorityQueue_2::_ctor(::System::Collections::Generic::IComparer_1<float_t> priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, priorityComparer, itemEquality);
}
// Ctor Parameters [CppParam { name: "priorityComparer", ty: "::System::Comparison_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "itemEquality", ty: "::System::Collections::Generic::IEqualityComparer_1<TItem>", modifiers: "", def_value: None }]
 ::Priority_Queue::SimplePriorityQueue_2::SimplePriorityQueue_2(::System::Comparison_1<float_t> priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SimplePriorityQueue_2>(priorityComparer, itemEquality))) {}
 void ::Priority_Queue::SimplePriorityQueue_2::_ctor(::System::Comparison_1<float_t> priorityComparer, ::System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, priorityComparer, itemEquality);
}
 ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t> ::Priority_Queue::SimplePriorityQueue_2::GetExistingNode(TItem item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "GetExistingNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void ::Priority_Queue::SimplePriorityQueue_2::AddToNodeCache(::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "AddToNodeCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void ::Priority_Queue::SimplePriorityQueue_2::RemoveFromNodeCache(::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "RemoveFromNodeCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 int32_t ::Priority_Queue::SimplePriorityQueue_2::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 TItem ::Priority_Queue::SimplePriorityQueue_2::get_First()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "get_First",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Priority_Queue::SimplePriorityQueue_2::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Priority_Queue::SimplePriorityQueue_2::Contains(TItem item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 TItem ::Priority_Queue::SimplePriorityQueue_2::Dequeue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "Dequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t> ::Priority_Queue::SimplePriorityQueue_2::EnqueueNoLockOrCache(TItem item, float_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "EnqueueNoLockOrCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Priority_Queue::____Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>, false>(const_cast<void*>(instance), ___internal_method, item, priority);
}
 void ::Priority_Queue::SimplePriorityQueue_2::Enqueue(TItem item, float_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item, priority);
}
 bool ::Priority_Queue::SimplePriorityQueue_2::EnqueueWithoutDuplicates(TItem item, float_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "EnqueueWithoutDuplicates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item, priority);
}
 void ::Priority_Queue::SimplePriorityQueue_2::Remove(TItem item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void ::Priority_Queue::SimplePriorityQueue_2::UpdatePriority(TItem item, float_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "UpdatePriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item, priority);
}
 float_t ::Priority_Queue::SimplePriorityQueue_2::GetPriority(TItem item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "GetPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool ::Priority_Queue::SimplePriorityQueue_2::TryFirst(ByRef<TItem> first)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "TryFirst",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, first);
}
 bool ::Priority_Queue::SimplePriorityQueue_2::TryDequeue(ByRef<TItem> first)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "TryDequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, first);
}
 bool ::Priority_Queue::SimplePriorityQueue_2::TryRemove(TItem item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "TryRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool ::Priority_Queue::SimplePriorityQueue_2::TryUpdatePriority(TItem item, float_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "TryUpdatePriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item, priority);
}
 bool ::Priority_Queue::SimplePriorityQueue_2::TryGetPriority(TItem item, ByRef<float_t> priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "TryGetPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item, priority);
}
 ::System::Collections::Generic::IEnumerator_1<TItem> ::Priority_Queue::SimplePriorityQueue_2::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TItem>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::Priority_Queue::SimplePriorityQueue_2::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Priority_Queue::SimplePriorityQueue_2::IsValidQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_2>::get(),
                            "IsValidQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
