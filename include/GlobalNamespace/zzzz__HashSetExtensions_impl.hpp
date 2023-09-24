#pragma once
#include "GlobalNamespace/zzzz__HashSetExtensions_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__HashSetExtensions_def.hpp"
template<typename T>
 void GlobalNamespace::HashSetExtensions::SetCapacity(System::Collections::Generic::HashSet_1<T> hs, int32_t capacity)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HashSetExtensions>::get(),
                        "SetCapacity",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, hs, capacity);
}
template<typename T>
 System::Collections::Generic::HashSet_1<T> GlobalNamespace::HashSetExtensions::GetHashSet(int32_t capacity)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HashSetExtensions>::get(),
                        "GetHashSet",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::HashSet_1<T>, false>(nullptr, ___internal_method, capacity);
}
constexpr System::Reflection::BindingFlags  GlobalNamespace::GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1<T>::Flags{36};
 void GlobalNamespace::GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1<T>::__set__InitializeMethod_k__BackingField(System::Reflection::MethodInfo value)  {
::cordl_internals::setStaticField<System::Reflection::MethodInfo, "<InitializeMethod>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1<T>>::get>(std::forward<System::Reflection::MethodInfo>(value));
}
 System::Reflection::MethodInfo GlobalNamespace::GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1<T>::__get__InitializeMethod_k__BackingField()  {
return ::cordl_internals::getStaticField<System::Reflection::MethodInfo, "<InitializeMethod>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1<T>>::get>();
}
 System::Reflection::MethodInfo GlobalNamespace::GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1<T>::get_InitializeMethod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1<T>>::get(),
                            "get_InitializeMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodInfo, false>(nullptr, ___internal_method);
}
