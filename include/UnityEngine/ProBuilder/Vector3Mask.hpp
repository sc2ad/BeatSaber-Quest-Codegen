// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Byte
#include "System/Byte.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Vector3Mask
  struct Vector3Mask;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Vector3Mask, "UnityEngine.ProBuilder", "Vector3Mask");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x1
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.Vector3Mask
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 112FBB0
  struct Vector3Mask/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::ProBuilder::Vector3Mask>*/ {
    public:
    public:
    // private System.Byte m_Mask
    // Size: 0x1
    // Offset: 0x0
    uint8_t m_Mask;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: Vector3Mask
    constexpr Vector3Mask(uint8_t m_Mask_ = {}) noexcept : m_Mask{m_Mask_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::ProBuilder::Vector3Mask>
    operator ::System::IEquatable_1<::UnityEngine::ProBuilder::Vector3Mask>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::Vector3Mask>*>(this);
    }
    // Creating interface conversion operator: i_Vector3Mask
    inline ::System::IEquatable_1<::UnityEngine::ProBuilder::Vector3Mask>* i_Vector3Mask() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::Vector3Mask>*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return m_Mask;
    }
    // static field const value: static private System.Byte X
    static constexpr const uint8_t X = 1u;
    // Get static field: static private System.Byte X
    static uint8_t _get_X();
    // Set static field: static private System.Byte X
    static void _set_X(uint8_t value);
    // static field const value: static private System.Byte Y
    static constexpr const uint8_t Y = 2u;
    // Get static field: static private System.Byte Y
    static uint8_t _get_Y();
    // Set static field: static private System.Byte Y
    static void _set_Y(uint8_t value);
    // static field const value: static private System.Byte Z
    static constexpr const uint8_t Z = 4u;
    // Get static field: static private System.Byte Z
    static uint8_t _get_Z();
    // Set static field: static private System.Byte Z
    static void _set_Z(uint8_t value);
    // Get static field: static public readonly UnityEngine.ProBuilder.Vector3Mask XYZ
    static ::UnityEngine::ProBuilder::Vector3Mask _get_XYZ();
    // Set static field: static public readonly UnityEngine.ProBuilder.Vector3Mask XYZ
    static void _set_XYZ(::UnityEngine::ProBuilder::Vector3Mask value);
    // Get instance field reference: private System.Byte m_Mask
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_Mask();
    // public System.Single get_x()
    // Offset: 0x29DC308
    float get_x();
    // public System.Single get_y()
    // Offset: 0x29DC320
    float get_y();
    // public System.Single get_z()
    // Offset: 0x29DC338
    float get_z();
    // public System.Int32 get_active()
    // Offset: 0x29DC53C
    int get_active();
    // public System.Single get_Item(System.Int32 i)
    // Offset: 0x29DC910
    float get_Item(int i);
    // public System.Void set_Item(System.Int32 i, System.Single value)
    // Offset: 0x29DC9A4
    void set_Item(int i, float value);
    // public System.Void .ctor(UnityEngine.Vector3 v, System.Single epsilon)
    // Offset: 0x29DC350
    Vector3Mask(::UnityEngine::Vector3 v, float epsilon);
    // public System.Void .ctor(System.Byte mask)
    // Offset: 0x29DC44C
    // ABORTED: conflicts with another method.  Vector3Mask(uint8_t mask);
    // static private System.Void .cctor()
    // Offset: 0x29DCAF8
    static void _cctor();
    // static public UnityEngine.ProBuilder.Vector3Mask op_Explicit(UnityEngine.Vector3 v)
    // Offset: 0x29DC5AC
    explicit Vector3Mask(::UnityEngine::Vector3& v);
    // public System.Boolean Equals(UnityEngine.ProBuilder.Vector3Mask other)
    // Offset: 0x29DCA58
    bool Equals(::UnityEngine::ProBuilder::Vector3Mask other);
    // public override System.String ToString()
    // Offset: 0x29DC454
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x29DCA68
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x29DCAF0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.Vector3Mask
  #pragma pack(pop)
  static check_size<sizeof(Vector3Mask), 0 + sizeof(uint8_t)> __UnityEngine_ProBuilder_Vector3MaskSizeCheck;
  static_assert(sizeof(Vector3Mask) == 0x1);
  // static public UnityEngine.ProBuilder.Vector3Mask op_BitwiseOr(UnityEngine.ProBuilder.Vector3Mask left, UnityEngine.ProBuilder.Vector3Mask right)
  // Offset: 0x29DC5DC
  ::UnityEngine::ProBuilder::Vector3Mask operator|(const ::UnityEngine::ProBuilder::Vector3Mask& left, const ::UnityEngine::ProBuilder::Vector3Mask& right);
  // static public UnityEngine.ProBuilder.Vector3Mask op_BitwiseAnd(UnityEngine.ProBuilder.Vector3Mask left, UnityEngine.ProBuilder.Vector3Mask right)
  // Offset: 0x29DC5E8
  ::UnityEngine::ProBuilder::Vector3Mask operator&(const ::UnityEngine::ProBuilder::Vector3Mask& left, const ::UnityEngine::ProBuilder::Vector3Mask& right);
  // static public UnityEngine.ProBuilder.Vector3Mask op_ExclusiveOr(UnityEngine.ProBuilder.Vector3Mask left, UnityEngine.ProBuilder.Vector3Mask right)
  // Offset: 0x29DC5F4
  ::UnityEngine::ProBuilder::Vector3Mask operator^(const ::UnityEngine::ProBuilder::Vector3Mask& left, const ::UnityEngine::ProBuilder::Vector3Mask& right);
  // static public UnityEngine.Vector3 op_Multiply(UnityEngine.ProBuilder.Vector3Mask mask, System.Single value)
  // Offset: 0x29DC600
  ::UnityEngine::Vector3 operator*(const ::UnityEngine::ProBuilder::Vector3Mask& mask, const float& value);
  // static public UnityEngine.Vector3 op_Multiply(UnityEngine.ProBuilder.Vector3Mask mask, UnityEngine.Vector3 value)
  // Offset: 0x29DC664
  ::UnityEngine::Vector3 operator*(const ::UnityEngine::ProBuilder::Vector3Mask& mask, const ::UnityEngine::Vector3& value);
  // static public UnityEngine.Vector3 op_Multiply(UnityEngine.Quaternion rotation, UnityEngine.ProBuilder.Vector3Mask mask)
  // Offset: 0x29DC6C4
  ::UnityEngine::Vector3 operator*(const ::UnityEngine::Quaternion& rotation, const ::UnityEngine::ProBuilder::Vector3Mask& mask);
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.Vector3Mask left, UnityEngine.ProBuilder.Vector3Mask right)
  // Offset: 0x29DC888
  bool operator ==(const ::UnityEngine::ProBuilder::Vector3Mask& left, const ::UnityEngine::ProBuilder::Vector3Mask& right);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.Vector3Mask left, UnityEngine.ProBuilder.Vector3Mask right)
  // Offset: 0x29DC898
  bool operator !=(const ::UnityEngine::ProBuilder::Vector3Mask& left, const ::UnityEngine::ProBuilder::Vector3Mask& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::get_x
// Il2CppName: get_x
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::Vector3Mask::*)()>(&UnityEngine::ProBuilder::Vector3Mask::get_x)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Vector3Mask), "get_x", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::get_y
// Il2CppName: get_y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::Vector3Mask::*)()>(&UnityEngine::ProBuilder::Vector3Mask::get_y)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Vector3Mask), "get_y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::get_z
// Il2CppName: get_z
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::Vector3Mask::*)()>(&UnityEngine::ProBuilder::Vector3Mask::get_z)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Vector3Mask), "get_z", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::get_active
// Il2CppName: get_active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Vector3Mask::*)()>(&UnityEngine::ProBuilder::Vector3Mask::get_active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Vector3Mask), "get_active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::Vector3Mask::*)(int)>(&UnityEngine::ProBuilder::Vector3Mask::get_Item)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Vector3Mask), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Vector3Mask::*)(int, float)>(&UnityEngine::ProBuilder::Vector3Mask::set_Item)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Vector3Mask), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::Vector3Mask
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::Vector3Mask
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::Vector3Mask::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Vector3Mask), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::Vector3Mask
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Vector3Mask::*)(::UnityEngine::ProBuilder::Vector3Mask)>(&UnityEngine::ProBuilder::Vector3Mask::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vector3Mask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Vector3Mask), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::Vector3Mask::*)()>(&UnityEngine::ProBuilder::Vector3Mask::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Vector3Mask), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Vector3Mask::*)(::Il2CppObject*)>(&UnityEngine::ProBuilder::Vector3Mask::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Vector3Mask), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Vector3Mask::*)()>(&UnityEngine::ProBuilder::Vector3Mask::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Vector3Mask), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::operator|
// Il2CppName: op_BitwiseOr
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::operator&
// Il2CppName: op_BitwiseAnd
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::operator^
// Il2CppName: op_ExclusiveOr
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Vector3Mask::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
