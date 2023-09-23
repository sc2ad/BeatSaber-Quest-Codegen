#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentIntensityReductionOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType::GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType  GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType::Keep{0};
constexpr GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType  GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType::RemoveWithStrobeFilter{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType::GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType  GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType::Keep{0};
constexpr GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType  GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType::RemoveWithStrobeFilter{1};
//  Writing Method size for method: GlobalNamespace::EnvironmentIntensityReductionOptions.get_compressExpand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType (GlobalNamespace::EnvironmentIntensityReductionOptions::*)()>(&GlobalNamespace::EnvironmentIntensityReductionOptions::get_compressExpand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bef00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentIntensityReductionOptions>::get(),
                            "get_compressExpand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EnvironmentIntensityReductionOptions.get_rotateRings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType (GlobalNamespace::EnvironmentIntensityReductionOptions::*)()>(&GlobalNamespace::EnvironmentIntensityReductionOptions::get_rotateRings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bef08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentIntensityReductionOptions>::get(),
                            "get_rotateRings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EnvironmentIntensityReductionOptions._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentIntensityReductionOptions::*)()>(&GlobalNamespace::EnvironmentIntensityReductionOptions::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bef10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentIntensityReductionOptions>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::EnvironmentIntensityReductionOptions::__set__compressExpand(GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType GlobalNamespace::EnvironmentIntensityReductionOptions::__get__compressExpand() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EnvironmentIntensityReductionOptions::__set__rotateRings(GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType GlobalNamespace::EnvironmentIntensityReductionOptions::__get__rotateRings() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType GlobalNamespace::EnvironmentIntensityReductionOptions::get_compressExpand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentIntensityReductionOptions>::get(),
                            "get_compressExpand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType GlobalNamespace::EnvironmentIntensityReductionOptions::get_rotateRings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentIntensityReductionOptions>::get(),
                            "get_rotateRings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::EnvironmentIntensityReductionOptions::EnvironmentIntensityReductionOptions()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EnvironmentIntensityReductionOptions>())) {}
 void GlobalNamespace::EnvironmentIntensityReductionOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentIntensityReductionOptions>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
