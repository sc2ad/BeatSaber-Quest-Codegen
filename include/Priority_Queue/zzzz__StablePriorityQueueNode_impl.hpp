#pragma once
#include "Priority_Queue/zzzz__FastPriorityQueueNode_impl.hpp"
namespace {
#include "Priority_Queue/zzzz__StablePriorityQueueNode_def.hpp"
//  Writing Method size for method: ::Priority_Queue::StablePriorityQueueNode.get_InsertionIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Priority_Queue::StablePriorityQueueNode::*)()>(&::Priority_Queue::StablePriorityQueueNode::get_InsertionIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d70f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueueNode>::get(),
                            "get_InsertionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::StablePriorityQueueNode.set_InsertionIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::StablePriorityQueueNode::*)(int64_t)>(&::Priority_Queue::StablePriorityQueueNode::set_InsertionIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d70f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueueNode>::get(),
                            "set_InsertionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::StablePriorityQueueNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::StablePriorityQueueNode::*)()>(&::Priority_Queue::StablePriorityQueueNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d7100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueueNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Priority_Queue::StablePriorityQueueNode::__set__InsertionIndex_k__BackingField(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::Priority_Queue::StablePriorityQueueNode::__get__InsertionIndex_k__BackingField() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int64_t ::Priority_Queue::StablePriorityQueueNode::get_InsertionIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueueNode>::get(),
                            "get_InsertionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Priority_Queue::StablePriorityQueueNode::set_InsertionIndex(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueueNode>::get(),
                            "set_InsertionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::Priority_Queue::StablePriorityQueueNode::StablePriorityQueueNode()  : ::Priority_Queue::FastPriorityQueueNode(THROW_UNLESS(::il2cpp_utils::New<StablePriorityQueueNode>())) {}
 void ::Priority_Queue::StablePriorityQueueNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueueNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
