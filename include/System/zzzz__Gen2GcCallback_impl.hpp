#pragma once
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_impl.hpp"
namespace {
#include "System/zzzz__Gen2GcCallback_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
//  Writing Method size for method: ::System::Gen2GcCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Gen2GcCallback::*)()>(&::System::Gen2GcCallback::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24294d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Gen2GcCallback.Register
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Func_2<::bs_hook::Il2CppWrapperType,bool>, ::bs_hook::Il2CppWrapperType)>(&::System::Gen2GcCallback::Register)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x24294d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback>::get(),
                            "Register",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::bs_hook::Il2CppWrapperType,bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Gen2GcCallback.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Gen2GcCallback::*)(::System::Func_2<::bs_hook::Il2CppWrapperType,bool>, ::bs_hook::Il2CppWrapperType)>(&::System::Gen2GcCallback::Setup)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2429558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::bs_hook::Il2CppWrapperType,bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Gen2GcCallback.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Gen2GcCallback::*)()>(&::System::Gen2GcCallback::Finalize)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2429580;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Gen2GcCallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Gen2GcCallback::__set__callback(::System::Func_2<::bs_hook::Il2CppWrapperType,bool> value)  {
::cordl_internals::setInstanceField<::System::Func_2<::bs_hook::Il2CppWrapperType,bool>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<::bs_hook::Il2CppWrapperType,bool>>(value));
}
constexpr ::System::Func_2<::bs_hook::Il2CppWrapperType,bool> ::System::Gen2GcCallback::__get__callback() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::bs_hook::Il2CppWrapperType,bool>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Gen2GcCallback::__set__weakTargetObj(::System::Runtime::InteropServices::GCHandle value)  {
::cordl_internals::setInstanceField<::System::Runtime::InteropServices::GCHandle, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::InteropServices::GCHandle>(value));
}
constexpr ::System::Runtime::InteropServices::GCHandle ::System::Gen2GcCallback::__get__weakTargetObj() const {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::GCHandle, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Gen2GcCallback::Gen2GcCallback()  : ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject(THROW_UNLESS(::il2cpp_utils::New<Gen2GcCallback>())) {}
 void ::System::Gen2GcCallback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Gen2GcCallback::Register(::System::Func_2<::bs_hook::Il2CppWrapperType,bool> callback, ::bs_hook::Il2CppWrapperType targetObj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback>::get(),
                            "Register",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::bs_hook::Il2CppWrapperType,bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback, targetObj);
}
 void ::System::Gen2GcCallback::Setup(::System::Func_2<::bs_hook::Il2CppWrapperType,bool> callback, ::bs_hook::Il2CppWrapperType targetObj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::bs_hook::Il2CppWrapperType,bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback, targetObj);
}
 void ::System::Gen2GcCallback::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
