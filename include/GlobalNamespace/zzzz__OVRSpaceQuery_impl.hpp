#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceQuery_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceQuery_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "System/zzzz__Guid_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType::GlobalNamespace__OVRSpaceQuery__ComponentType(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType  GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType::None{0u};
constexpr GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType  GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType::Locatable{1u};
constexpr GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType  GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType::Storable{2u};
constexpr GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType  GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType::Sharable{4u};
constexpr GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType  GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType::Bounded2D{8u};
constexpr GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType  GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType::Bounded3D{16u};
constexpr GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType  GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType::SemanticLabels{32u};
constexpr GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType  GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType::RoomLayout{64u};
constexpr GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType  GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType::SpaceContainer{128u};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options.get_MaxResults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::*)()>(&GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::get_MaxResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x260cd20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "get_MaxResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options.set_MaxResults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::set_MaxResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x260cd28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "set_MaxResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options.get_Timeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::*)()>(&GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::get_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x260cd30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "get_Timeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options.set_Timeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::*)(double_t)>(&GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::set_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x260cd38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "set_Timeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options.get_Location
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation (GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::*)()>(&GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::get_Location)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x260cd40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "get_Location",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options.set_Location
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::*)(GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation)>(&GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::set_Location)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x260cd48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "set_Location",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options.get_QueryType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType (GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::*)()>(&GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::get_QueryType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x260cd50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "get_QueryType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options.set_QueryType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::*)(GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType)>(&GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::set_QueryType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x260cd58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "set_QueryType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options.get_ActionType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType (GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::*)()>(&GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::get_ActionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x260cd60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "get_ActionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options.set_ActionType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::*)(GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType)>(&GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::set_ActionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x260cd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "set_ActionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options.get_ComponentFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType (GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::*)()>(&GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::get_ComponentFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x260cd70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "get_ComponentFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options.set_ComponentFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::*)(GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType)>(&GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::set_ComponentFilter)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x260640c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "set_ComponentFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options.get_UuidFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<System::Guid> (GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::*)()>(&GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::get_UuidFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x260cd78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "get_UuidFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options.set_UuidFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::*)(System::Collections::Generic::IEnumerable_1<System::Guid>)>(&GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::set_UuidFilter)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2606208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "set_UuidFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<System::Guid>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::*)(GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options)>(&GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x260cd80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options.TryQuerySpaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::*)(ByRef<uint64_t>)>(&GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::TryQuerySpaces)> {
  constexpr static std::size_t size = 0x968;
  constexpr static std::size_t addrs = 0x2606510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "TryQuerySpaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_MaxResults_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Timeout_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Location_k__BackingField", ty: "GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation", modifiers: "", def_value: Some("{}") }, CppParam { name: "_QueryType_k__BackingField", ty: "GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ActionType_k__BackingField", ty: "GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_componentFilter", ty: "GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_uuidFilter", ty: "System::Collections::Generic::IEnumerable_1<System::Guid>", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::GlobalNamespace__OVRSpaceQuery__Options(int32_t _MaxResults_k__BackingField, double_t _Timeout_k__BackingField, GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation _Location_k__BackingField, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType _QueryType_k__BackingField, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType _ActionType_k__BackingField, GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType _componentFilter, System::Collections::Generic::IEnumerable_1<System::Guid> _uuidFilter) noexcept : ::bs_hook::ValueTypeWrapper() {this->_MaxResults_k__BackingField = _MaxResults_k__BackingField;
this->_Timeout_k__BackingField = _Timeout_k__BackingField;
this->_Location_k__BackingField = _Location_k__BackingField;
this->_QueryType_k__BackingField = _QueryType_k__BackingField;
this->_ActionType_k__BackingField = _ActionType_k__BackingField;
this->_componentFilter = _componentFilter;
this->_uuidFilter = _uuidFilter;
}
 void GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::__set_Ids(::ArrayW<System::Guid> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Guid>, "Ids", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get>(std::forward<::ArrayW<System::Guid>>(value));
}
 ::ArrayW<System::Guid> GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::__get_Ids()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Guid>, "Ids", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get>();
}
 void GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::__set_ComponentTypes(::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType> value)  {
::cordl_internals::setStaticField<::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType>, "ComponentTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get>(std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType>>(value));
}
 ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType> GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::__get_ComponentTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType>, "ComponentTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get>();
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::__set__MaxResults_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::__get__MaxResults_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::__set__Timeout_k__BackingField(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x8>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::__get__Timeout_k__BackingField() const {
return ::cordl_internals::getInstanceField<double_t, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::__set__Location_k__BackingField(GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation, 0x10>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::__get__Location_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::__set__QueryType_k__BackingField(GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType, 0x14>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::__get__QueryType_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType, 0x14>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::__set__ActionType_k__BackingField(GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType, 0x18>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::__get__ActionType_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType, 0x18>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::__set__componentFilter(GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType, 0x1c>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::__get__componentFilter() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType, 0x1c>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::__set__uuidFilter(System::Collections::Generic::IEnumerable_1<System::Guid> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<System::Guid>, 0x20>(this->__instance, std::forward<System::Collections::Generic::IEnumerable_1<System::Guid>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<System::Guid> GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::__get__uuidFilter() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<System::Guid>, 0x20>(this->__instance);
}
 int32_t GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::get_MaxResults()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "get_MaxResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::set_MaxResults(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "set_MaxResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 double_t GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::get_Timeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "get_Timeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::set_Timeout(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "set_Timeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::get_Location()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "get_Location",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::set_Location(GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "set_Location",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::get_QueryType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "get_QueryType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::set_QueryType(GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "set_QueryType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::get_ActionType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "get_ActionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::set_ActionType(GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "set_ActionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryActionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::get_ComponentFilter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "get_ComponentFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::set_ComponentFilter(GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "set_ComponentFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__ComponentType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 System::Collections::Generic::IEnumerable_1<System::Guid> GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::get_UuidFilter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "get_UuidFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<System::Guid>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::set_UuidFilter(System::Collections::Generic::IEnumerable_1<System::Guid> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "set_UuidFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<System::Guid>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::_ctor(GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options::TryQuerySpaces(ByRef<uint64_t> requestId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options>::get(),
                            "TryQuerySpaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, requestId);
}
