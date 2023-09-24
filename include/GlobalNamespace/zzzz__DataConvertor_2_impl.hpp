#pragma once
#include "GlobalNamespace/zzzz__DataConvertor_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "GlobalNamespace/zzzz__DataItemConvertor_2_def.hpp"
constexpr void GlobalNamespace::DataConvertor_2<T,TParam>::__set__convertors(System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::DataItemConvertor_2<T,TParam>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::DataItemConvertor_2<T,TParam>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::DataItemConvertor_2<T,TParam>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::DataItemConvertor_2<T,TParam>> GlobalNamespace::DataConvertor_2<T,TParam>::__get__convertors() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::DataItemConvertor_2<T,TParam>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 T GlobalNamespace::DataConvertor_2<T,TParam>::ProcessItem(::bs_hook::Il2CppWrapperType item, TParam param)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DataConvertor_2<T,TParam>>::get(),
                            "ProcessItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, item, param);
}
 void GlobalNamespace::DataConvertor_2<T,TParam>::AddConvertor(GlobalNamespace::DataItemConvertor_2<T,TParam> dataItemConvertor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DataConvertor_2<T,TParam>>::get(),
                            "AddConvertor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DataItemConvertor_2<T,TParam>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dataItemConvertor);
}
 GlobalNamespace::DataConvertor_2<T,TParam> GlobalNamespace::DataConvertor_2<T,TParam>::New_ctor()  {
GlobalNamespace::DataConvertor_2<T,TParam> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::DataConvertor_2<T,TParam>>())};
return o;
}
 void GlobalNamespace::DataConvertor_2<T,TParam>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DataConvertor_2<T,TParam>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
