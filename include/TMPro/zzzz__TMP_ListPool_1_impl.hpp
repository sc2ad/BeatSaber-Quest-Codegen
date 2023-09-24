#pragma once
#include "TMPro/zzzz__TMP_ListPool_1_def.hpp"
#include "TMPro/zzzz__TMP_ObjectPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_ListPool_1_def.hpp"
 void TMPro::TMPro__TMP_ListPool_1____c<T>::__set___9(TMPro::TMPro__TMP_ListPool_1____c<T> value)  {
::cordl_internals::setStaticField<TMPro::TMPro__TMP_ListPool_1____c<T>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMPro__TMP_ListPool_1____c<T>>::get>(std::forward<TMPro::TMPro__TMP_ListPool_1____c<T>>(value));
}
 TMPro::TMPro__TMP_ListPool_1____c<T> TMPro::TMPro__TMP_ListPool_1____c<T>::__get___9()  {
return ::cordl_internals::getStaticField<TMPro::TMPro__TMP_ListPool_1____c<T>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMPro__TMP_ListPool_1____c<T>>::get>();
}
 TMPro::TMPro__TMP_ListPool_1____c<T> TMPro::TMPro__TMP_ListPool_1____c<T>::New_ctor()  {
TMPro::TMPro__TMP_ListPool_1____c<T> o{THROW_UNLESS(::il2cpp_utils::New<TMPro::TMPro__TMP_ListPool_1____c<T>>())};
return o;
}
 void TMPro::TMPro__TMP_ListPool_1____c<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMPro__TMP_ListPool_1____c<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void TMPro::TMPro__TMP_ListPool_1____c<T>::__cctor_b__3_0(System::Collections::Generic::List_1<T> l)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMPro__TMP_ListPool_1____c<T>>::get(),
                            "<.cctor>b__3_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, l);
}
 void TMPro::TMP_ListPool_1<T>::__set_s_ListPool(TMPro::TMP_ObjectPool_1<System::Collections::Generic::List_1<T>> value)  {
::cordl_internals::setStaticField<TMPro::TMP_ObjectPool_1<System::Collections::Generic::List_1<T>>, "s_ListPool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_ListPool_1<T>>::get>(std::forward<TMPro::TMP_ObjectPool_1<System::Collections::Generic::List_1<T>>>(value));
}
 TMPro::TMP_ObjectPool_1<System::Collections::Generic::List_1<T>> TMPro::TMP_ListPool_1<T>::__get_s_ListPool()  {
return ::cordl_internals::getStaticField<TMPro::TMP_ObjectPool_1<System::Collections::Generic::List_1<T>>, "s_ListPool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_ListPool_1<T>>::get>();
}
 System::Collections::Generic::List_1<T> TMPro::TMP_ListPool_1<T>::Get()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_ListPool_1<T>>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<T>, false>(nullptr, ___internal_method);
}
 void TMPro::TMP_ListPool_1<T>::Release(System::Collections::Generic::List_1<T> toRelease)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_ListPool_1<T>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, toRelease);
}
