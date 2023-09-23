#pragma once
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::RandomObjectPicker_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RandomObjectPicker_1::*)(T, float_t)>(&GlobalNamespace::RandomObjectPicker_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RandomObjectPicker_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RandomObjectPicker_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RandomObjectPicker_1::*)(::ArrayW<T>, float_t)>(&GlobalNamespace::RandomObjectPicker_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RandomObjectPicker_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RandomObjectPicker_1.PickRandomObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (GlobalNamespace::RandomObjectPicker_1::*)()>(&GlobalNamespace::RandomObjectPicker_1::PickRandomObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RandomObjectPicker_1>::get(),
                            "PickRandomObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::RandomObjectPicker_1::__set__objects(::ArrayW<T> value)  {
::cordl_internals::setInstanceField<::ArrayW<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<T>>(value));
}
constexpr ::ArrayW<T> GlobalNamespace::RandomObjectPicker_1::__get__objects() const {
return ::cordl_internals::getInstanceField<::ArrayW<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RandomObjectPicker_1::__set__lastPickTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::RandomObjectPicker_1::__get__lastPickTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RandomObjectPicker_1::__set__minimumPickInterval(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::RandomObjectPicker_1::__get__minimumPickInterval() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "obj", ty: "T", modifiers: "", def_value: None }, CppParam { name: "minimumPickInterval", ty: "float_t", modifiers: "", def_value: None }]
 GlobalNamespace::RandomObjectPicker_1::RandomObjectPicker_1(T obj, float_t minimumPickInterval)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RandomObjectPicker_1>(obj, minimumPickInterval))) {}
 void GlobalNamespace::RandomObjectPicker_1::_ctor(T obj, float_t minimumPickInterval)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RandomObjectPicker_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, minimumPickInterval);
}
// Ctor Parameters [CppParam { name: "objects", ty: "::ArrayW<T>", modifiers: "", def_value: None }, CppParam { name: "minimumPickInterval", ty: "float_t", modifiers: "", def_value: None }]
 GlobalNamespace::RandomObjectPicker_1::RandomObjectPicker_1(::ArrayW<T> objects, float_t minimumPickInterval)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RandomObjectPicker_1>(objects, minimumPickInterval))) {}
 void GlobalNamespace::RandomObjectPicker_1::_ctor(::ArrayW<T> objects, float_t minimumPickInterval)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RandomObjectPicker_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, objects, minimumPickInterval);
}
 T GlobalNamespace::RandomObjectPicker_1::PickRandomObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RandomObjectPicker_1>::get(),
                            "PickRandomObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
