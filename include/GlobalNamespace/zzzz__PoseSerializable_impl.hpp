#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
#include "GlobalNamespace/zzzz__QuaternionSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "GlobalNamespace/zzzz__Vector3Serializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PoseSerializable::*)(::GlobalNamespace::Vector3Serializable, ::GlobalNamespace::QuaternionSerializable)>(&::GlobalNamespace::PoseSerializable::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x121b2f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Vector3Serializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuaternionSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.get_identity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PoseSerializable (*)()>(&::GlobalNamespace::PoseSerializable::get_identity)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x121b308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            "get_identity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PoseSerializable::*)(::LiteNetLib::Utils::NetDataWriter)>(&::GlobalNamespace::PoseSerializable::Serialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x121b32c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PoseSerializable::*)(::LiteNetLib::Utils::NetDataReader)>(&::GlobalNamespace::PoseSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x121b354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PoseSerializable::*)(::GlobalNamespace::PoseSerializable)>(&::GlobalNamespace::PoseSerializable::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x121b37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PoseSerializable::*)(::bs_hook::Il2CppWrapperType)>(&::GlobalNamespace::PoseSerializable::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x121b3e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PoseSerializable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::PoseSerializable::*)()>(&::GlobalNamespace::PoseSerializable::GetHashCode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x121b478;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PoseSerializable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PoseSerializable::*)()>(&::GlobalNamespace::PoseSerializable::ToString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x121b4bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PoseSerializable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.GetSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::PoseSerializable::*)()>(&::GlobalNamespace::PoseSerializable::GetSize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x121b588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            "GetSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.op_Implicit___UnityEngine__Pose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (*)(::GlobalNamespace::PoseSerializable)>(&::GlobalNamespace::PoseSerializable::op_Implicit___UnityEngine__Pose)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x121b5b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.op_Implicit___GlobalNamespace__PoseSerializable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PoseSerializable (*)(::UnityEngine::Pose)>(&::GlobalNamespace::PoseSerializable::op_Implicit___GlobalNamespace__PoseSerializable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x121b64c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.op_Addition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PoseSerializable (*)(::GlobalNamespace::PoseSerializable, ::GlobalNamespace::PoseSerializable)>(&::GlobalNamespace::PoseSerializable::op_Addition)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x121b6c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            "op_Addition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.op_Subtraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PoseSerializable (*)(::GlobalNamespace::PoseSerializable, ::GlobalNamespace::PoseSerializable)>(&::GlobalNamespace::PoseSerializable::op_Subtraction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x121b72c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            "op_Subtraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr  ::GlobalNamespace::PoseSerializable::operator ::LiteNetLib::Utils::INetSerializable() const {
return ::LiteNetLib::Utils::INetSerializable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::IEquatable_1<::GlobalNamespace::PoseSerializable>
constexpr  ::GlobalNamespace::PoseSerializable::operator ::System::IEquatable_1<::GlobalNamespace::PoseSerializable>() const {
return ::System::IEquatable_1<::GlobalNamespace::PoseSerializable>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "position", ty: "::GlobalNamespace::Vector3Serializable", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::GlobalNamespace::QuaternionSerializable", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PoseSerializable::PoseSerializable(::GlobalNamespace::Vector3Serializable position, ::GlobalNamespace::QuaternionSerializable rotation) noexcept : ::bs_hook::ValueTypeWrapper() {this->position = position;
this->rotation = rotation;
}
constexpr void ::GlobalNamespace::PoseSerializable::__set_position(::GlobalNamespace::Vector3Serializable value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3Serializable, 0x0>(this->__instance, std::forward<::GlobalNamespace::Vector3Serializable>(value));
}
constexpr ::GlobalNamespace::Vector3Serializable ::GlobalNamespace::PoseSerializable::__get_position() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3Serializable, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::PoseSerializable::__set_rotation(::GlobalNamespace::QuaternionSerializable value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::QuaternionSerializable, 0xc>(this->__instance, std::forward<::GlobalNamespace::QuaternionSerializable>(value));
}
constexpr ::GlobalNamespace::QuaternionSerializable ::GlobalNamespace::PoseSerializable::__get_rotation() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::QuaternionSerializable, 0xc>(this->__instance);
}
 void ::GlobalNamespace::PoseSerializable::_ctor(::GlobalNamespace::Vector3Serializable position, ::GlobalNamespace::QuaternionSerializable rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Vector3Serializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuaternionSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, position, rotation);
}
 ::GlobalNamespace::PoseSerializable ::GlobalNamespace::PoseSerializable::get_identity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            "get_identity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::PoseSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, writer);
}
 void ::GlobalNamespace::PoseSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, reader);
}
 bool ::GlobalNamespace::PoseSerializable::Equals(::GlobalNamespace::PoseSerializable other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool ::GlobalNamespace::PoseSerializable::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 int32_t ::GlobalNamespace::PoseSerializable::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW ::GlobalNamespace::PoseSerializable::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::GlobalNamespace::PoseSerializable::GetSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            "GetSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::UnityEngine::Pose ::GlobalNamespace::PoseSerializable::op_Implicit___UnityEngine__Pose(::GlobalNamespace::PoseSerializable p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(nullptr, ___internal_method, p);
}
 ::GlobalNamespace::PoseSerializable ::GlobalNamespace::PoseSerializable::op_Implicit___GlobalNamespace__PoseSerializable(::UnityEngine::Pose p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable, false>(nullptr, ___internal_method, p);
}
 ::GlobalNamespace::PoseSerializable ::GlobalNamespace::PoseSerializable::op_Addition(::GlobalNamespace::PoseSerializable a, ::GlobalNamespace::PoseSerializable b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            "op_Addition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable, false>(nullptr, ___internal_method, a, b);
}
 ::GlobalNamespace::PoseSerializable ::GlobalNamespace::PoseSerializable::op_Subtraction(::GlobalNamespace::PoseSerializable a, ::GlobalNamespace::PoseSerializable b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseSerializable>::get(),
                            "op_Subtraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable, false>(nullptr, ___internal_method, a, b);
}
} // end anonymous namespace
