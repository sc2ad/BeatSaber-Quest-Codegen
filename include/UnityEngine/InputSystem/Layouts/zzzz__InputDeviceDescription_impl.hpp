#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
// Ctor Parameters [CppParam { name: "interface", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "product", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "serial", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "manufacturer", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "capabilities", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson::UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson(::StringW interface, ::StringW type, ::StringW product, ::StringW serial, ::StringW version, ::StringW manufacturer, ::StringW capabilities) noexcept : ::bs_hook::ValueTypeWrapper() {this->interface = interface;
this->type = type;
this->product = product;
this->serial = serial;
this->version = version;
this->manufacturer = manufacturer;
this->capabilities = capabilities;
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson::__set_interface(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson::__get_interface() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson::__set_type(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson::__get_type() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson::__set_product(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson::__get_product() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson::__set_serial(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson::__get_serial() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson::__set_version(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson::__get_version() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson::__set_manufacturer(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson::__get_manufacturer() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson::__set_capabilities(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceDescription__DeviceDescriptionJson::__get_capabilities() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_interfaceName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_interfaceName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2973fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "get_interfaceName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.set_interfaceName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_interfaceName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2973fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "set_interfaceName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_deviceClass
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_deviceClass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2973fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "get_deviceClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.set_deviceClass
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_deviceClass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2973ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "set_deviceClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_manufacturer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_manufacturer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2973ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "get_manufacturer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.set_manufacturer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_manufacturer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2974000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "set_manufacturer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_product
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_product)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2974008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "get_product",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.set_product
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_product)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2974010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "set_product",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_serial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_serial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2974018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "get_serial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.set_serial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_serial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2974020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "set_serial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2974028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "get_version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.set_version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2974030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "set_version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_capabilities
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_capabilities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2974038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "get_capabilities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.set_capabilities
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_capabilities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2974040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "set_capabilities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_empty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_empty)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2974048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::ToString)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x29740cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x29743d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::bs_hook::Il2CppWrapperType)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2974480;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::GetHashCode)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2974518;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Layouts::InputDeviceDescription),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::Layouts::InputDeviceDescription, UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::op_Equality)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2974640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::Layouts::InputDeviceDescription, UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::op_Inequality)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2974678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.ToJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::ToJson)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x29746b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.FromJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::InputDeviceDescription (*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::FromJson)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2974734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "FromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputDeviceDescription.ComparePropertyToDeviceDescriptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ::StringW)>(&UnityEngine::InputSystem::Layouts::InputDeviceDescription::ComparePropertyToDeviceDescriptor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2974800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "ComparePropertyToDeviceDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IEquatable_1<UnityEngine::InputSystem::Layouts::InputDeviceDescription>
constexpr  UnityEngine::InputSystem::Layouts::InputDeviceDescription::operator System::IEquatable_1<UnityEngine::InputSystem::Layouts::InputDeviceDescription>() const {
return System::IEquatable_1<UnityEngine::InputSystem::Layouts::InputDeviceDescription>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_InterfaceName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_DeviceClass", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Manufacturer", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Product", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Serial", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Version", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Capabilities", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::InputSystem::Layouts::InputDeviceDescription::InputDeviceDescription(::StringW m_InterfaceName, ::StringW m_DeviceClass, ::StringW m_Manufacturer, ::StringW m_Product, ::StringW m_Serial, ::StringW m_Version, ::StringW m_Capabilities) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_InterfaceName = m_InterfaceName;
this->m_DeviceClass = m_DeviceClass;
this->m_Manufacturer = m_Manufacturer;
this->m_Product = m_Product;
this->m_Serial = m_Serial;
this->m_Version = m_Version;
this->m_Capabilities = m_Capabilities;
}
constexpr void UnityEngine::InputSystem::Layouts::InputDeviceDescription::__set_m_InterfaceName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::__get_m_InterfaceName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::InputDeviceDescription::__set_m_DeviceClass(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::__get_m_DeviceClass() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::InputDeviceDescription::__set_m_Manufacturer(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::__get_m_Manufacturer() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::InputDeviceDescription::__set_m_Product(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::__get_m_Product() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::InputDeviceDescription::__set_m_Serial(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::__get_m_Serial() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::InputDeviceDescription::__set_m_Version(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::__get_m_Version() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::InputDeviceDescription::__set_m_Capabilities(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::__get_m_Capabilities() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
 ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_interfaceName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "get_interfaceName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_interfaceName(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "set_interfaceName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_deviceClass()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "get_deviceClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_deviceClass(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "set_deviceClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_manufacturer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "get_manufacturer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_manufacturer(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "set_manufacturer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_product()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "get_product",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_product(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "set_product",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_serial()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "get_serial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_serial(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "set_serial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "get_version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_version(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "set_version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_capabilities()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "get_capabilities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_capabilities(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "set_capabilities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::InputSystem::Layouts::InputDeviceDescription::Equals(UnityEngine::InputSystem::Layouts::InputDeviceDescription other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool UnityEngine::InputSystem::Layouts::InputDeviceDescription::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 int32_t UnityEngine::InputSystem::Layouts::InputDeviceDescription::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::InputSystem::Layouts::InputDeviceDescription::op_Equality(UnityEngine::InputSystem::Layouts::InputDeviceDescription left, UnityEngine::InputSystem::Layouts::InputDeviceDescription right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 bool UnityEngine::InputSystem::Layouts::InputDeviceDescription::op_Inequality(UnityEngine::InputSystem::Layouts::InputDeviceDescription left, UnityEngine::InputSystem::Layouts::InputDeviceDescription right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::ToJson()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::Layouts::InputDeviceDescription UnityEngine::InputSystem::Layouts::InputDeviceDescription::FromJson(::StringW json)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "FromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::InputDeviceDescription, false>(nullptr, ___internal_method, json);
}
 bool UnityEngine::InputSystem::Layouts::InputDeviceDescription::ComparePropertyToDeviceDescriptor(::StringW propertyName, ::StringW propertyValue, ::StringW deviceDescriptor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                            "ComparePropertyToDeviceDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, propertyName, propertyValue, deviceDescriptor);
}
