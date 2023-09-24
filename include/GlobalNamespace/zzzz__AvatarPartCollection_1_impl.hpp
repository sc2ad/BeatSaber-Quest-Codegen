#pragma once
#include "GlobalNamespace/zzzz__AvatarPartCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
constexpr void GlobalNamespace::AvatarPartCollection_1<T>::__set__partById(System::Collections::Generic::Dictionary_2<::StringW,T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,T>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,T> GlobalNamespace::AvatarPartCollection_1<T>::__get__partById() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AvatarPartCollection_1<T>::__set__partIndexById(System::Collections::Generic::Dictionary_2<::StringW,int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,int32_t>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,int32_t> GlobalNamespace::AvatarPartCollection_1<T>::__get__partIndexById() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AvatarPartCollection_1<T>::__set__parts(::ArrayW<T> value)  {
::cordl_internals::setInstanceField<::ArrayW<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<T>>(value));
}
constexpr ::ArrayW<T> GlobalNamespace::AvatarPartCollection_1<T>::__get__parts() const {
return ::cordl_internals::getInstanceField<::ArrayW<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t GlobalNamespace::AvatarPartCollection_1<T>::get_count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AvatarPartCollection_1<T>>::get(),
                            "get_count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<T> GlobalNamespace::AvatarPartCollection_1<T>::get_parts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AvatarPartCollection_1<T>>::get(),
                            "get_parts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::AvatarPartCollection_1<T> GlobalNamespace::AvatarPartCollection_1<T>::New_ctor(::ArrayW<T> parts)  {
GlobalNamespace::AvatarPartCollection_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::AvatarPartCollection_1<T>>(parts))};
return o;
}
 void GlobalNamespace::AvatarPartCollection_1<T>::_ctor(::ArrayW<T> parts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AvatarPartCollection_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parts);
}
 T GlobalNamespace::AvatarPartCollection_1<T>::GetById(::StringW id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AvatarPartCollection_1<T>>::get(),
                            "GetById",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, id);
}
 T GlobalNamespace::AvatarPartCollection_1<T>::GetRandom()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AvatarPartCollection_1<T>>::get(),
                            "GetRandom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 T GlobalNamespace::AvatarPartCollection_1<T>::GetByIndex(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AvatarPartCollection_1<T>>::get(),
                            "GetByIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, index);
}
 int32_t GlobalNamespace::AvatarPartCollection_1<T>::GetIndexById(::StringW id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AvatarPartCollection_1<T>>::get(),
                            "GetIndexById",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, id);
}
 T GlobalNamespace::AvatarPartCollection_1<T>::GetDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AvatarPartCollection_1<T>>::get(),
                            "GetDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
