#pragma once
#include "ModestTree/Util/zzzz__ValuePair_4_def.hpp"
constexpr void ModestTree::Util::ValuePair_4<T1,T2,T3,T4>::__set_First(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T1>(value));
}
constexpr T1 ModestTree::Util::ValuePair_4<T1,T2,T3,T4>::__get_First() const {
return ::cordl_internals::getInstanceField<T1, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ModestTree::Util::ValuePair_4<T1,T2,T3,T4>::__set_Second(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T2>(value));
}
constexpr T2 ModestTree::Util::ValuePair_4<T1,T2,T3,T4>::__get_Second() const {
return ::cordl_internals::getInstanceField<T2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ModestTree::Util::ValuePair_4<T1,T2,T3,T4>::__set_Third(T3 value)  {
::cordl_internals::setInstanceField<T3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T3>(value));
}
constexpr T3 ModestTree::Util::ValuePair_4<T1,T2,T3,T4>::__get_Third() const {
return ::cordl_internals::getInstanceField<T3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ModestTree::Util::ValuePair_4<T1,T2,T3,T4>::__set_Fourth(T4 value)  {
::cordl_internals::setInstanceField<T4, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T4>(value));
}
constexpr T4 ModestTree::Util::ValuePair_4<T1,T2,T3,T4>::__get_Fourth() const {
return ::cordl_internals::getInstanceField<T4, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ModestTree::Util::ValuePair_4<T1,T2,T3,T4> ModestTree::Util::ValuePair_4<T1,T2,T3,T4>::New_ctor()  {
ModestTree::Util::ValuePair_4<T1,T2,T3,T4> o{THROW_UNLESS(::il2cpp_utils::New<ModestTree::Util::ValuePair_4<T1,T2,T3,T4>>())};
return o;
}
 void ModestTree::Util::ValuePair_4<T1,T2,T3,T4>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::Util::ValuePair_4<T1,T2,T3,T4>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ModestTree::Util::ValuePair_4<T1,T2,T3,T4> ModestTree::Util::ValuePair_4<T1,T2,T3,T4>::New_ctor(T1 first, T2 second, T3 third, T4 fourth)  {
ModestTree::Util::ValuePair_4<T1,T2,T3,T4> o{THROW_UNLESS(::il2cpp_utils::New<ModestTree::Util::ValuePair_4<T1,T2,T3,T4>>(first, second, third, fourth))};
return o;
}
 void ModestTree::Util::ValuePair_4<T1,T2,T3,T4>::_ctor(T1 first, T2 second, T3 third, T4 fourth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::Util::ValuePair_4<T1,T2,T3,T4>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, first, second, third, fourth);
}
 bool ModestTree::Util::ValuePair_4<T1,T2,T3,T4>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::Util::ValuePair_4<T1,T2,T3,T4>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool ModestTree::Util::ValuePair_4<T1,T2,T3,T4>::Equals(ModestTree::Util::ValuePair_4<T1,T2,T3,T4> that)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::Util::ValuePair_4<T1,T2,T3,T4>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ModestTree::Util::ValuePair_4<T1,T2,T3,T4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, that);
}
 int32_t ModestTree::Util::ValuePair_4<T1,T2,T3,T4>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ModestTree::Util::ValuePair_4<T1,T2,T3,T4>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
