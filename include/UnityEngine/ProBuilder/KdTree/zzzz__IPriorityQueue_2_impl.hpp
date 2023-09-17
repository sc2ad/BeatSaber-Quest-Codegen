#pragma once
namespace {
#include "UnityEngine/ProBuilder/KdTree/zzzz__IPriorityQueue_2_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2.Enqueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2::*)(TItem, TPriority)>(&::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2::Enqueue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2.Dequeue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TItem (::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2::*)()>(&::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2::Dequeue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2::*)()>(&::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 void ::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2::Enqueue(TItem item, TPriority priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item, priority);
}
 TItem ::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2::Dequeue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2>::get(),
                            "Dequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
