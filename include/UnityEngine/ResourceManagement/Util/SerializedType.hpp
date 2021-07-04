// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Size: 0x19
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ResourceManagement.Util.SerializedType
  struct SerializedType/*, public System::ValueType*/ {
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xDFCE28
    // private System.String m_AssemblyName
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* m_AssemblyName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xDFCE74
    // private System.String m_ClassName
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* m_ClassName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Type m_CachedType
    // Size: 0x8
    // Offset: 0x10
    System::Type* m_CachedType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDFCEC0
    // private System.Boolean <ValueChanged>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool ValueChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SerializedType
    constexpr SerializedType(::Il2CppString* m_AssemblyName_ = {}, ::Il2CppString* m_ClassName_ = {}, System::Type* m_CachedType_ = {}, bool ValueChanged_ = {}) noexcept : m_AssemblyName{m_AssemblyName_}, m_ClassName{m_ClassName_}, m_CachedType{m_CachedType_}, ValueChanged{ValueChanged_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.String get_AssemblyName()
    // Offset: 0xF03178
    ::Il2CppString* get_AssemblyName();
    // public System.String get_ClassName()
    // Offset: 0xF03180
    ::Il2CppString* get_ClassName();
    // public System.Type get_Value()
    // Offset: 0xF03190
    System::Type* get_Value();
    // public System.Void set_Value(System.Type value)
    // Offset: 0xF03198
    void set_Value(System::Type* value);
    // public System.Boolean get_ValueChanged()
    // Offset: 0xF031A0
    bool get_ValueChanged();
    // public System.Void set_ValueChanged(System.Boolean value)
    // Offset: 0xF031A8
    void set_ValueChanged(bool value);
    // public override System.String ToString()
    // Offset: 0xF03188
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ResourceManagement.Util.SerializedType
  #pragma pack(pop)
  static check_size<sizeof(SerializedType), 24 + sizeof(bool)> __UnityEngine_ResourceManagement_Util_SerializedTypeSizeCheck;
  static_assert(sizeof(SerializedType) == 0x19);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::SerializedType, "UnityEngine.ResourceManagement.Util", "SerializedType");
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedType::get_AssemblyName
// Il2CppName: get_AssemblyName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedType::get_ClassName
// Il2CppName: get_ClassName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedType::get_Value
// Il2CppName: get_Value
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedType::set_Value
// Il2CppName: set_Value
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedType::get_ValueChanged
// Il2CppName: get_ValueChanged
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedType::set_ValueChanged
// Il2CppName: set_ValueChanged
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedType::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!