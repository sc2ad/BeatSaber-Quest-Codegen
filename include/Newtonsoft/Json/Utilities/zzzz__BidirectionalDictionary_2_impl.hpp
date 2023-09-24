#pragma once
#include "Newtonsoft/Json/Utilities/zzzz__BidirectionalDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
constexpr void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::__set__firstToSecond(System::Collections::Generic::IDictionary_2<TFirst,TSecond> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IDictionary_2<TFirst,TSecond>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IDictionary_2<TFirst,TSecond>>(value));
}
constexpr System::Collections::Generic::IDictionary_2<TFirst,TSecond> Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::__get__firstToSecond() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IDictionary_2<TFirst,TSecond>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::__set__secondToFirst(System::Collections::Generic::IDictionary_2<TSecond,TFirst> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IDictionary_2<TSecond,TFirst>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IDictionary_2<TSecond,TFirst>>(value));
}
constexpr System::Collections::Generic::IDictionary_2<TSecond,TFirst> Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::__get__secondToFirst() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IDictionary_2<TSecond,TFirst>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::__set__duplicateFirstErrorMessage(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::__get__duplicateFirstErrorMessage() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::__set__duplicateSecondErrorMessage(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::__get__duplicateSecondErrorMessage() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond> Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::New_ctor()  {
Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond> o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>>())};
return o;
}
 void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond> Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::New_ctor(System::Collections::Generic::IEqualityComparer_1<TFirst> firstEqualityComparer, System::Collections::Generic::IEqualityComparer_1<TSecond> secondEqualityComparer)  {
Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond> o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>>(firstEqualityComparer, secondEqualityComparer))};
return o;
}
 void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::_ctor(System::Collections::Generic::IEqualityComparer_1<TFirst> firstEqualityComparer, System::Collections::Generic::IEqualityComparer_1<TSecond> secondEqualityComparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<TFirst>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<TSecond>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstEqualityComparer, secondEqualityComparer);
}
 Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond> Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::New_ctor(System::Collections::Generic::IEqualityComparer_1<TFirst> firstEqualityComparer, System::Collections::Generic::IEqualityComparer_1<TSecond> secondEqualityComparer, ::StringW duplicateFirstErrorMessage, ::StringW duplicateSecondErrorMessage)  {
Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond> o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>>(firstEqualityComparer, secondEqualityComparer, duplicateFirstErrorMessage, duplicateSecondErrorMessage))};
return o;
}
 void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::_ctor(System::Collections::Generic::IEqualityComparer_1<TFirst> firstEqualityComparer, System::Collections::Generic::IEqualityComparer_1<TSecond> secondEqualityComparer, ::StringW duplicateFirstErrorMessage, ::StringW duplicateSecondErrorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<TFirst>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<TSecond>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstEqualityComparer, secondEqualityComparer, duplicateFirstErrorMessage, duplicateSecondErrorMessage);
}
 void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::Set(TFirst first, TSecond second)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFirst>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSecond>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, first, second);
}
 bool Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::TryGetByFirst(TFirst first, ByRef<TSecond> second)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>>::get(),
                            "TryGetByFirst",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFirst>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TSecond>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, first, second);
}
 bool Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::TryGetBySecond(TSecond second, ByRef<TFirst> first)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>>::get(),
                            "TryGetBySecond",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSecond>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TFirst>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, second, first);
}
