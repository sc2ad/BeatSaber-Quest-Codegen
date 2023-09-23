#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSizeData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__EnvironmentSizeData__FloorType::GlobalNamespace__EnvironmentSizeData__FloorType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__EnvironmentSizeData__FloorType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__EnvironmentSizeData__FloorType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__EnvironmentSizeData__FloorType  GlobalNamespace::GlobalNamespace__EnvironmentSizeData__FloorType::NoFloor{0};
constexpr GlobalNamespace::GlobalNamespace__EnvironmentSizeData__FloorType  GlobalNamespace::GlobalNamespace__EnvironmentSizeData__FloorType::CloseTo0{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__EnvironmentSizeData__CeilingType::GlobalNamespace__EnvironmentSizeData__CeilingType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__EnvironmentSizeData__CeilingType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__EnvironmentSizeData__CeilingType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__EnvironmentSizeData__CeilingType  GlobalNamespace::GlobalNamespace__EnvironmentSizeData__CeilingType::NoCeiling{0};
constexpr GlobalNamespace::GlobalNamespace__EnvironmentSizeData__CeilingType  GlobalNamespace::GlobalNamespace__EnvironmentSizeData__CeilingType::LowCeiling{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__EnvironmentSizeData__TrackLaneType::GlobalNamespace__EnvironmentSizeData__TrackLaneType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__EnvironmentSizeData__TrackLaneType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__EnvironmentSizeData__TrackLaneType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__EnvironmentSizeData__TrackLaneType  GlobalNamespace::GlobalNamespace__EnvironmentSizeData__TrackLaneType::None{0};
constexpr GlobalNamespace::GlobalNamespace__EnvironmentSizeData__TrackLaneType  GlobalNamespace::GlobalNamespace__EnvironmentSizeData__TrackLaneType::Normal{1};
//  Writing Method size for method: GlobalNamespace::EnvironmentSizeData.get_floorType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__EnvironmentSizeData__FloorType (GlobalNamespace::EnvironmentSizeData::*)()>(&GlobalNamespace::EnvironmentSizeData::get_floorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bf47c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentSizeData>::get(),
                            "get_floorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EnvironmentSizeData.get_ceilingType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__EnvironmentSizeData__CeilingType (GlobalNamespace::EnvironmentSizeData::*)()>(&GlobalNamespace::EnvironmentSizeData::get_ceilingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bf484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentSizeData>::get(),
                            "get_ceilingType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EnvironmentSizeData.get_trackLaneType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__EnvironmentSizeData__TrackLaneType (GlobalNamespace::EnvironmentSizeData::*)()>(&GlobalNamespace::EnvironmentSizeData::get_trackLaneType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bf48c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentSizeData>::get(),
                            "get_trackLaneType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EnvironmentSizeData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentSizeData::*)()>(&GlobalNamespace::EnvironmentSizeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bf494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentSizeData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::EnvironmentSizeData::__set__floorType(GlobalNamespace::GlobalNamespace__EnvironmentSizeData__FloorType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__EnvironmentSizeData__FloorType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__EnvironmentSizeData__FloorType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__EnvironmentSizeData__FloorType GlobalNamespace::EnvironmentSizeData::__get__floorType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__EnvironmentSizeData__FloorType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EnvironmentSizeData::__set__ceilingType(GlobalNamespace::GlobalNamespace__EnvironmentSizeData__CeilingType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__EnvironmentSizeData__CeilingType, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__EnvironmentSizeData__CeilingType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__EnvironmentSizeData__CeilingType GlobalNamespace::EnvironmentSizeData::__get__ceilingType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__EnvironmentSizeData__CeilingType, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EnvironmentSizeData::__set__trackLaneType(GlobalNamespace::GlobalNamespace__EnvironmentSizeData__TrackLaneType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__EnvironmentSizeData__TrackLaneType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__EnvironmentSizeData__TrackLaneType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__EnvironmentSizeData__TrackLaneType GlobalNamespace::EnvironmentSizeData::__get__trackLaneType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__EnvironmentSizeData__TrackLaneType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__EnvironmentSizeData__FloorType GlobalNamespace::EnvironmentSizeData::get_floorType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentSizeData>::get(),
                            "get_floorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__EnvironmentSizeData__FloorType, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__EnvironmentSizeData__CeilingType GlobalNamespace::EnvironmentSizeData::get_ceilingType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentSizeData>::get(),
                            "get_ceilingType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__EnvironmentSizeData__CeilingType, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__EnvironmentSizeData__TrackLaneType GlobalNamespace::EnvironmentSizeData::get_trackLaneType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentSizeData>::get(),
                            "get_trackLaneType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__EnvironmentSizeData__TrackLaneType, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::EnvironmentSizeData::EnvironmentSizeData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EnvironmentSizeData>())) {}
 void GlobalNamespace::EnvironmentSizeData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentSizeData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
