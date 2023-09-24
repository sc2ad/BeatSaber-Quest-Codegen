#pragma once
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
constexpr void GlobalNamespace::RandomObjectPicker_1<T>::__set__objects(::ArrayW<T> value)  {
::cordl_internals::setInstanceField<::ArrayW<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<T>>(value));
}
constexpr ::ArrayW<T> GlobalNamespace::RandomObjectPicker_1<T>::__get__objects() const {
return ::cordl_internals::getInstanceField<::ArrayW<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RandomObjectPicker_1<T>::__set__lastPickTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::RandomObjectPicker_1<T>::__get__lastPickTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RandomObjectPicker_1<T>::__set__minimumPickInterval(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::RandomObjectPicker_1<T>::__get__minimumPickInterval() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::RandomObjectPicker_1<T> GlobalNamespace::RandomObjectPicker_1<T>::New_ctor(T obj, float_t minimumPickInterval)  {
GlobalNamespace::RandomObjectPicker_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::RandomObjectPicker_1<T>>(obj, minimumPickInterval))};
return o;
}
 void GlobalNamespace::RandomObjectPicker_1<T>::_ctor(T obj, float_t minimumPickInterval)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RandomObjectPicker_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, minimumPickInterval);
}
 GlobalNamespace::RandomObjectPicker_1<T> GlobalNamespace::RandomObjectPicker_1<T>::New_ctor(::ArrayW<T> objects, float_t minimumPickInterval)  {
GlobalNamespace::RandomObjectPicker_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::RandomObjectPicker_1<T>>(objects, minimumPickInterval))};
return o;
}
 void GlobalNamespace::RandomObjectPicker_1<T>::_ctor(::ArrayW<T> objects, float_t minimumPickInterval)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RandomObjectPicker_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, objects, minimumPickInterval);
}
 T GlobalNamespace::RandomObjectPicker_1<T>::PickRandomObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RandomObjectPicker_1<T>>::get(),
                            "PickRandomObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
