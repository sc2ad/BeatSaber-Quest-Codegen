#pragma once
#include "Newtonsoft/Json/Serialization/zzzz__CachedAttributeGetter_1_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ThreadSafeStore_2_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::Serialization::CachedAttributeGetter_1.GetAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (*)(::bs_hook::Il2CppWrapperType)>(&Newtonsoft::Json::Serialization::CachedAttributeGetter_1::GetAttribute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::CachedAttributeGetter_1>::get(),
                            "GetAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
 void Newtonsoft::Json::Serialization::CachedAttributeGetter_1::__set_TypeAttributeCache(Newtonsoft::Json::Utilities::ThreadSafeStore_2<::bs_hook::Il2CppWrapperType,T> value)  {
::cordl_internals::setStaticField<Newtonsoft::Json::Utilities::ThreadSafeStore_2<::bs_hook::Il2CppWrapperType,T>, "TypeAttributeCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::CachedAttributeGetter_1>::get>(std::forward<Newtonsoft::Json::Utilities::ThreadSafeStore_2<::bs_hook::Il2CppWrapperType,T>>(value));
}
 Newtonsoft::Json::Utilities::ThreadSafeStore_2<::bs_hook::Il2CppWrapperType,T> Newtonsoft::Json::Serialization::CachedAttributeGetter_1::__get_TypeAttributeCache()  {
return ::cordl_internals::getStaticField<Newtonsoft::Json::Utilities::ThreadSafeStore_2<::bs_hook::Il2CppWrapperType,T>, "TypeAttributeCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::CachedAttributeGetter_1>::get>();
}
 T Newtonsoft::Json::Serialization::CachedAttributeGetter_1::GetAttribute(::bs_hook::Il2CppWrapperType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::CachedAttributeGetter_1>::get(),
                            "GetAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, type);
}
