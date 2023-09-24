#pragma once
#include "Newtonsoft/Json/Serialization/zzzz__CachedAttributeGetter_1_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ThreadSafeStore_2_def.hpp"
 void Newtonsoft::Json::Serialization::CachedAttributeGetter_1<T>::__set_TypeAttributeCache(Newtonsoft::Json::Utilities::ThreadSafeStore_2<::bs_hook::Il2CppWrapperType,T> value)  {
::cordl_internals::setStaticField<Newtonsoft::Json::Utilities::ThreadSafeStore_2<::bs_hook::Il2CppWrapperType,T>, "TypeAttributeCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::CachedAttributeGetter_1<T>>::get>(std::forward<Newtonsoft::Json::Utilities::ThreadSafeStore_2<::bs_hook::Il2CppWrapperType,T>>(value));
}
 Newtonsoft::Json::Utilities::ThreadSafeStore_2<::bs_hook::Il2CppWrapperType,T> Newtonsoft::Json::Serialization::CachedAttributeGetter_1<T>::__get_TypeAttributeCache()  {
return ::cordl_internals::getStaticField<Newtonsoft::Json::Utilities::ThreadSafeStore_2<::bs_hook::Il2CppWrapperType,T>, "TypeAttributeCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::CachedAttributeGetter_1<T>>::get>();
}
 T Newtonsoft::Json::Serialization::CachedAttributeGetter_1<T>::GetAttribute(::bs_hook::Il2CppWrapperType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::CachedAttributeGetter_1<T>>::get(),
                            "GetAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, type);
}
