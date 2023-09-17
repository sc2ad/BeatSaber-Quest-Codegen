#pragma once
namespace {
#include "System/Threading/zzzz__ThreadHelper_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
//  Writing Method size for method: ::System::Threading::ThreadHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadHelper::*)(::System::Delegate)>(&::System::Threading::ThreadHelper::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24abdac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadHelper.SetExecutionContextHelper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadHelper::*)(::System::Threading::ExecutionContext)>(&::System::Threading::ThreadHelper::SetExecutionContextHelper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24abdd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper>::get(),
                            "SetExecutionContextHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadHelper.ThreadStart_Context
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&::System::Threading::ThreadHelper::ThreadStart_Context)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x24abddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper>::get(),
                            "ThreadStart_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadHelper.ThreadStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadHelper::*)(::bs_hook::Il2CppWrapperType)>(&::System::Threading::ThreadHelper::ThreadStart)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x24abee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper>::get(),
                            "ThreadStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadHelper.ThreadStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadHelper::*)()>(&::System::Threading::ThreadHelper::ThreadStart)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x24abfe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper>::get(),
                            "ThreadStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Threading::ThreadHelper::__set__start(::System::Delegate value)  {
::cordl_internals::setInstanceField<::System::Delegate, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Delegate>(value));
}
constexpr ::System::Delegate ::System::Threading::ThreadHelper::__get__start() const {
return ::cordl_internals::getInstanceField<::System::Delegate, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::ThreadHelper::__set__startArg(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Threading::ThreadHelper::__get__startArg() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::ThreadHelper::__set__executionContext(::System::Threading::ExecutionContext value)  {
::cordl_internals::setInstanceField<::System::Threading::ExecutionContext, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::ExecutionContext>(value));
}
constexpr ::System::Threading::ExecutionContext ::System::Threading::ThreadHelper::__get__executionContext() const {
return ::cordl_internals::getInstanceField<::System::Threading::ExecutionContext, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Threading::ThreadHelper::__set__ccb(::System::Threading::ContextCallback value)  {
::cordl_internals::setStaticField<::System::Threading::ContextCallback, "_ccb", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper>::get>(std::forward<::System::Threading::ContextCallback>(value));
}
 ::System::Threading::ContextCallback ::System::Threading::ThreadHelper::__get__ccb()  {
return ::cordl_internals::getStaticField<::System::Threading::ContextCallback, "_ccb", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper>::get>();
}
// Ctor Parameters [CppParam { name: "start", ty: "::System::Delegate", modifiers: "", def_value: None }]
 ::System::Threading::ThreadHelper::ThreadHelper(::System::Delegate start)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ThreadHelper>(start))) {}
 void ::System::Threading::ThreadHelper::_ctor(::System::Delegate start)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, start);
}
 void ::System::Threading::ThreadHelper::SetExecutionContextHelper(::System::Threading::ExecutionContext ec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper>::get(),
                            "SetExecutionContextHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ec);
}
 void ::System::Threading::ThreadHelper::ThreadStart_Context(::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper>::get(),
                            "ThreadStart_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state);
}
 void ::System::Threading::ThreadHelper::ThreadStart(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper>::get(),
                            "ThreadStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 void ::System::Threading::ThreadHelper::ThreadStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper>::get(),
                            "ThreadStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
