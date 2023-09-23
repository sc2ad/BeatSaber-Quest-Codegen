#pragma once
#include "System/zzzz__ContextBoundObject_impl.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__ContextCallbackObject_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__CrossContextDelegate_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Contexts::ContextCallbackObject.DoCallBack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Contexts::ContextCallbackObject::*)(System::Runtime::Remoting::Contexts::CrossContextDelegate)>(&System::Runtime::Remoting::Contexts::ContextCallbackObject::DoCallBack)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2332754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::ContextCallbackObject>::get(),
                            "DoCallBack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::CrossContextDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::ContextCallbackObject._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Contexts::ContextCallbackObject::*)()>(&System::Runtime::Remoting::Contexts::ContextCallbackObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233274c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::ContextCallbackObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Runtime::Remoting::Contexts::ContextCallbackObject::DoCallBack(System::Runtime::Remoting::Contexts::CrossContextDelegate deleg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::ContextCallbackObject>::get(),
                            "DoCallBack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::CrossContextDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deleg);
}
// Ctor Parameters []
 System::Runtime::Remoting::Contexts::ContextCallbackObject::ContextCallbackObject()  : System::ContextBoundObject(THROW_UNLESS(::il2cpp_utils::New<ContextCallbackObject>())) {}
 void System::Runtime::Remoting::Contexts::ContextCallbackObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::ContextCallbackObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
