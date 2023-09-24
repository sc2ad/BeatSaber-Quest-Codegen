#pragma once
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_def.hpp"
//  Writing Method size for method: System::Runtime::ConstrainedExecution::CriticalFinalizerObject._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::ConstrainedExecution::CriticalFinalizerObject::*)()>(&System::Runtime::ConstrainedExecution::CriticalFinalizerObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236b07c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::ConstrainedExecution::CriticalFinalizerObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::ConstrainedExecution::CriticalFinalizerObject.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::ConstrainedExecution::CriticalFinalizerObject::*)()>(&System::Runtime::ConstrainedExecution::CriticalFinalizerObject::Finalize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236d984;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::ConstrainedExecution::CriticalFinalizerObject),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::ConstrainedExecution::CriticalFinalizerObject>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 System::Runtime::ConstrainedExecution::CriticalFinalizerObject System::Runtime::ConstrainedExecution::CriticalFinalizerObject::New_ctor()  {
System::Runtime::ConstrainedExecution::CriticalFinalizerObject o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::ConstrainedExecution::CriticalFinalizerObject>())};
return o;
}
 void System::Runtime::ConstrainedExecution::CriticalFinalizerObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::ConstrainedExecution::CriticalFinalizerObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::ConstrainedExecution::CriticalFinalizerObject::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::ConstrainedExecution::CriticalFinalizerObject>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
