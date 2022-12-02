// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2Int
  struct Vector2Int;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Vector2Int, "UnityEngine", "Vector2Int");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Vector2Int
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 1084654
  // [UsedByNativeCodeAttribute] Offset: 1084654
  struct Vector2Int/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Vector2Int>*/ {
    public:
    public:
    // private System.Int32 m_X
    // Size: 0x4
    // Offset: 0x0
    int m_X;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Y
    // Size: 0x4
    // Offset: 0x4
    int m_Y;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Vector2Int
    constexpr Vector2Int(int m_X_ = {}, int m_Y_ = {}) noexcept : m_X{m_X_}, m_Y{m_Y_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Vector2Int>
    operator ::System::IEquatable_1<::UnityEngine::Vector2Int>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Vector2Int>*>(this);
    }
    // Creating interface conversion operator: i_Vector2Int
    inline ::System::IEquatable_1<::UnityEngine::Vector2Int>* i_Vector2Int() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::UnityEngine::Vector2Int>*>(this);
    }
    // Get static field: static private readonly UnityEngine.Vector2Int s_Zero
    static ::UnityEngine::Vector2Int _get_s_Zero();
    // Set static field: static private readonly UnityEngine.Vector2Int s_Zero
    static void _set_s_Zero(::UnityEngine::Vector2Int value);
    // Get static field: static private readonly UnityEngine.Vector2Int s_One
    static ::UnityEngine::Vector2Int _get_s_One();
    // Set static field: static private readonly UnityEngine.Vector2Int s_One
    static void _set_s_One(::UnityEngine::Vector2Int value);
    // Get static field: static private readonly UnityEngine.Vector2Int s_Up
    static ::UnityEngine::Vector2Int _get_s_Up();
    // Set static field: static private readonly UnityEngine.Vector2Int s_Up
    static void _set_s_Up(::UnityEngine::Vector2Int value);
    // Get static field: static private readonly UnityEngine.Vector2Int s_Down
    static ::UnityEngine::Vector2Int _get_s_Down();
    // Set static field: static private readonly UnityEngine.Vector2Int s_Down
    static void _set_s_Down(::UnityEngine::Vector2Int value);
    // Get static field: static private readonly UnityEngine.Vector2Int s_Left
    static ::UnityEngine::Vector2Int _get_s_Left();
    // Set static field: static private readonly UnityEngine.Vector2Int s_Left
    static void _set_s_Left(::UnityEngine::Vector2Int value);
    // Get static field: static private readonly UnityEngine.Vector2Int s_Right
    static ::UnityEngine::Vector2Int _get_s_Right();
    // Set static field: static private readonly UnityEngine.Vector2Int s_Right
    static void _set_s_Right(::UnityEngine::Vector2Int value);
    // Get instance field reference: private System.Int32 m_X
    [[deprecated("Use field access instead!")]] int& dyn_m_X();
    // Get instance field reference: private System.Int32 m_Y
    [[deprecated("Use field access instead!")]] int& dyn_m_Y();
    // public System.Int32 get_x()
    // Offset: 0x28DAFD4
    int get_x();
    // public System.Void set_x(System.Int32 value)
    // Offset: 0x28DAFDC
    void set_x(int value);
    // public System.Int32 get_y()
    // Offset: 0x28DAFE4
    int get_y();
    // public System.Void set_y(System.Int32 value)
    // Offset: 0x28DAFEC
    void set_y(int value);
    // public System.Void .ctor(System.Int32 x, System.Int32 y)
    // Offset: 0x28DAFF4
    // ABORTED: conflicts with another method.  Vector2Int(int x, int y);
    // static private System.Void .cctor()
    // Offset: 0x28DB274
    static void _cctor();
    // public System.Boolean Equals(UnityEngine.Vector2Int other)
    // Offset: 0x28DB098
    bool Equals(::UnityEngine::Vector2Int other);
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x28DB00C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x28DB0FC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x28DB150
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.Vector2Int
  #pragma pack(pop)
  static check_size<sizeof(Vector2Int), 4 + sizeof(int)> __UnityEngine_Vector2IntSizeCheck;
  static_assert(sizeof(Vector2Int) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Vector2Int::get_x
// Il2CppName: get_x
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Vector2Int::*)()>(&UnityEngine::Vector2Int::get_x)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), "get_x", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2Int::set_x
// Il2CppName: set_x
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Vector2Int::*)(int)>(&UnityEngine::Vector2Int::set_x)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), "set_x", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2Int::get_y
// Il2CppName: get_y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Vector2Int::*)()>(&UnityEngine::Vector2Int::get_y)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), "get_y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2Int::set_y
// Il2CppName: set_y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Vector2Int::*)(int)>(&UnityEngine::Vector2Int::set_y)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), "set_y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2Int::Vector2Int
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Vector2Int::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Vector2Int::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2Int::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Vector2Int::*)(::UnityEngine::Vector2Int)>(&UnityEngine::Vector2Int::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2Int")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2Int::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Vector2Int::*)(::Il2CppObject*)>(&UnityEngine::Vector2Int::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2Int::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Vector2Int::*)()>(&UnityEngine::Vector2Int::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2Int::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Vector2Int::*)()>(&UnityEngine::Vector2Int::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2Int), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
