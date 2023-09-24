#pragma once
#include "System/zzzz__RuntimeType_impl.hpp"
#include "System/zzzz__ReflectionOnlyType_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
//  Writing Method size for method: System::ReflectionOnlyType._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ReflectionOnlyType::*)()>(&System::ReflectionOnlyType::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x248340c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ReflectionOnlyType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ReflectionOnlyType.get_TypeHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeTypeHandle (System::ReflectionOnlyType::*)()>(&System::ReflectionOnlyType::get_TypeHandle)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2483464;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ReflectionOnlyType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ReflectionOnlyType>::get(),
                                  110
                                ));
    return ___internal_method;
  }
};
 System::ReflectionOnlyType System::ReflectionOnlyType::New_ctor()  {
System::ReflectionOnlyType o{THROW_UNLESS(::il2cpp_utils::New<System::ReflectionOnlyType>())};
return o;
}
 void System::ReflectionOnlyType::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ReflectionOnlyType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::RuntimeTypeHandle System::ReflectionOnlyType::get_TypeHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ReflectionOnlyType>::get(),
                            "get_TypeHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::RuntimeTypeHandle, false>(const_cast<void*>(instance), ___internal_method);
}
