#pragma once
#include "GlobalNamespace/zzzz__DataConvertor_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "GlobalNamespace/zzzz__DataItemConvertor_1_def.hpp"
constexpr void GlobalNamespace::DataConvertor_1<T>::__set__convertors(System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::DataItemConvertor_1<T>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::DataItemConvertor_1<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::DataItemConvertor_1<T>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::DataItemConvertor_1<T>> GlobalNamespace::DataConvertor_1<T>::__get__convertors() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::DataItemConvertor_1<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 T GlobalNamespace::DataConvertor_1<T>::ProcessItem(::bs_hook::Il2CppWrapperType item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DataConvertor_1<T>>::get(),
                            "ProcessItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void GlobalNamespace::DataConvertor_1<T>::AddConvertor(GlobalNamespace::DataItemConvertor_1<T> dataItemConvertor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DataConvertor_1<T>>::get(),
                            "AddConvertor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DataItemConvertor_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dataItemConvertor);
}
 GlobalNamespace::DataConvertor_1<T> GlobalNamespace::DataConvertor_1<T>::New_ctor()  {
GlobalNamespace::DataConvertor_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::DataConvertor_1<T>>())};
return o;
}
 void GlobalNamespace::DataConvertor_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DataConvertor_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
