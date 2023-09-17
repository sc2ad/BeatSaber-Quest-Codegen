#pragma once
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
namespace {
#include "System/Threading/Tasks/zzzz__ContinuationResultTaskFromResultTask_2_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__InternalTaskOptions_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2::*)(::System::Threading::Tasks::Task_1<TAntecedentResult>, ::System::Delegate, ::bs_hook::Il2CppWrapperType, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<TAntecedentResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2::*)()>(&::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2::__set_m_antecedent(::System::Threading::Tasks::Task_1<TAntecedentResult> value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<TAntecedentResult>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::Tasks::Task_1<TAntecedentResult>>(value));
}
constexpr ::System::Threading::Tasks::Task_1<TAntecedentResult> ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<TAntecedentResult>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "::System::Threading::Tasks::Task_1<TAntecedentResult>", modifiers: "", def_value: None }, CppParam { name: "function", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2::ContinuationResultTaskFromResultTask_2(::System::Threading::Tasks::Task_1<TAntecedentResult> antecedent, ::System::Delegate function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions)  : ::System::Threading::Tasks::Task_1<TResult>(THROW_UNLESS(::il2cpp_utils::New<ContinuationResultTaskFromResultTask_2>(antecedent, function, state, creationOptions, internalOptions))) {}
 void ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2::_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult> antecedent, ::System::Delegate function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<TAntecedentResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, function, state, creationOptions, internalOptions);
}
 void ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>::*)(::System::Threading::Tasks::Task_1<int32_t>, ::System::Delegate, ::bs_hook::Il2CppWrapperType, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>::*)()>(&::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>::__set_m_antecedent(::System::Threading::Tasks::Task_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<int32_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::Tasks::Task_1<int32_t>>(value));
}
constexpr ::System::Threading::Tasks::Task_1<int32_t> ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<int32_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "::System::Threading::Tasks::Task_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "function", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>::ContinuationResultTaskFromResultTask_2(::System::Threading::Tasks::Task_1<int32_t> antecedent, ::System::Delegate function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions)  : ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>(THROW_UNLESS(::il2cpp_utils::New<ContinuationResultTaskFromResultTask_2>(antecedent, function, state, creationOptions, internalOptions))) {}
 void ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>::_ctor(::System::Threading::Tasks::Task_1<int32_t> antecedent, ::System::Delegate function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, function, state, creationOptions, internalOptions);
}
 void ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2::*)(::System::Threading::Tasks::Task_1<TAntecedentResult>, ::System::Delegate, ::bs_hook::Il2CppWrapperType, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<TAntecedentResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2::*)()>(&::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2::__set_m_antecedent(::System::Threading::Tasks::Task_1<TAntecedentResult> value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<TAntecedentResult>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::Tasks::Task_1<TAntecedentResult>>(value));
}
constexpr ::System::Threading::Tasks::Task_1<TAntecedentResult> ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<TAntecedentResult>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "::System::Threading::Tasks::Task_1<TAntecedentResult>", modifiers: "", def_value: None }, CppParam { name: "function", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2::ContinuationResultTaskFromResultTask_2(::System::Threading::Tasks::Task_1<TAntecedentResult> antecedent, ::System::Delegate function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions)  : ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>(THROW_UNLESS(::il2cpp_utils::New<ContinuationResultTaskFromResultTask_2>(antecedent, function, state, creationOptions, internalOptions))) {}
 void ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2::_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult> antecedent, ::System::Delegate function, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<TAntecedentResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, function, state, creationOptions, internalOptions);
}
 void ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
