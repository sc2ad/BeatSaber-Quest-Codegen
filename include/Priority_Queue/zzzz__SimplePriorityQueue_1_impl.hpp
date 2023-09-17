#pragma once
#include "Priority_Queue/zzzz__SimplePriorityQueue_2_impl.hpp"
namespace {
#include "Priority_Queue/zzzz__SimplePriorityQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_1::*)()>(&::Priority_Queue::SimplePriorityQueue_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_1::*)(::System::Collections::Generic::IComparer_1<float_t>)>(&::Priority_Queue::SimplePriorityQueue_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::SimplePriorityQueue_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::SimplePriorityQueue_1::*)(::System::Comparison_1<float_t>)>(&::Priority_Queue::SimplePriorityQueue_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::Priority_Queue::SimplePriorityQueue_1::SimplePriorityQueue_1()  : ::Priority_Queue::SimplePriorityQueue_2<TItem,float_t>(THROW_UNLESS(::il2cpp_utils::New<SimplePriorityQueue_1>())) {}
 void ::Priority_Queue::SimplePriorityQueue_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<float_t>", modifiers: "", def_value: None }]
 ::Priority_Queue::SimplePriorityQueue_1::SimplePriorityQueue_1(::System::Collections::Generic::IComparer_1<float_t> comparer)  : ::Priority_Queue::SimplePriorityQueue_2<TItem,float_t>(THROW_UNLESS(::il2cpp_utils::New<SimplePriorityQueue_1>(comparer))) {}
 void ::Priority_Queue::SimplePriorityQueue_1::_ctor(::System::Collections::Generic::IComparer_1<float_t> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, comparer);
}
// Ctor Parameters [CppParam { name: "comparer", ty: "::System::Comparison_1<float_t>", modifiers: "", def_value: None }]
 ::Priority_Queue::SimplePriorityQueue_1::SimplePriorityQueue_1(::System::Comparison_1<float_t> comparer)  : ::Priority_Queue::SimplePriorityQueue_2<TItem,float_t>(THROW_UNLESS(::il2cpp_utils::New<SimplePriorityQueue_1>(comparer))) {}
 void ::Priority_Queue::SimplePriorityQueue_1::_ctor(::System::Comparison_1<float_t> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, comparer);
}
} // end anonymous namespace
