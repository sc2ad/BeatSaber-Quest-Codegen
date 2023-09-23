#pragma once
#include "Newtonsoft/Json/Serialization/zzzz__IValueProvider_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::Serialization::IValueProvider.SetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::IValueProvider::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&Newtonsoft::Json::Serialization::IValueProvider::SetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::Serialization::IValueProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::IValueProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::IValueProvider.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Serialization::IValueProvider::*)(::bs_hook::Il2CppWrapperType)>(&Newtonsoft::Json::Serialization::IValueProvider::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::Serialization::IValueProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::IValueProvider>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void Newtonsoft::Json::Serialization::IValueProvider::SetValue(::bs_hook::Il2CppWrapperType target, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::IValueProvider>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, target, value);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Serialization::IValueProvider::GetValue(::bs_hook::Il2CppWrapperType target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::IValueProvider>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, target);
}
