// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Rendering.BuiltinRenderTextureType
#include "UnityEngine/Rendering/BuiltinRenderTextureType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.CubemapFace
#include "UnityEngine/CubemapFace.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.RenderTargetIdentifier
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderTargetIdentifier/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Rendering::RenderTargetIdentifier>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private UnityEngine.Rendering.BuiltinRenderTextureType m_Type
    // Size: 0x4
    // Offset: 0x0
    UnityEngine::Rendering::BuiltinRenderTextureType m_Type;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::BuiltinRenderTextureType) == 0x4);
    // private System.Int32 m_NameID
    // Size: 0x4
    // Offset: 0x4
    int m_NameID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_InstanceID
    // Size: 0x4
    // Offset: 0x8
    int m_InstanceID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_InstanceID and: m_BufferPointer
    char __padding2[0x4] = {};
    // private System.IntPtr m_BufferPointer
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_BufferPointer;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.Int32 m_MipLevel
    // Size: 0x4
    // Offset: 0x18
    int m_MipLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.CubemapFace m_CubeFace
    // Size: 0x4
    // Offset: 0x1C
    UnityEngine::CubemapFace m_CubeFace;
    // Field size check
    static_assert(sizeof(UnityEngine::CubemapFace) == 0x4);
    // private System.Int32 m_DepthSlice
    // Size: 0x4
    // Offset: 0x20
    int m_DepthSlice;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RenderTargetIdentifier
    constexpr RenderTargetIdentifier(UnityEngine::Rendering::BuiltinRenderTextureType m_Type_ = {}, int m_NameID_ = {}, int m_InstanceID_ = {}, System::IntPtr m_BufferPointer_ = {}, int m_MipLevel_ = {}, UnityEngine::CubemapFace m_CubeFace_ = {}, int m_DepthSlice_ = {}) noexcept : m_Type{m_Type_}, m_NameID{m_NameID_}, m_InstanceID{m_InstanceID_}, m_BufferPointer{m_BufferPointer_}, m_MipLevel{m_MipLevel_}, m_CubeFace{m_CubeFace_}, m_DepthSlice{m_DepthSlice_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Rendering::RenderTargetIdentifier>
    operator System::IEquatable_1<UnityEngine::Rendering::RenderTargetIdentifier>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Rendering::RenderTargetIdentifier>*>(this);
    }
    // Get instance field reference: private UnityEngine.Rendering.BuiltinRenderTextureType m_Type
    UnityEngine::Rendering::BuiltinRenderTextureType& dyn_m_Type();
    // Get instance field reference: private System.Int32 m_NameID
    int& dyn_m_NameID();
    // Get instance field reference: private System.Int32 m_InstanceID
    int& dyn_m_InstanceID();
    // Get instance field reference: private System.IntPtr m_BufferPointer
    System::IntPtr& dyn_m_BufferPointer();
    // Get instance field reference: private System.Int32 m_MipLevel
    int& dyn_m_MipLevel();
    // Get instance field reference: private UnityEngine.CubemapFace m_CubeFace
    UnityEngine::CubemapFace& dyn_m_CubeFace();
    // Get instance field reference: private System.Int32 m_DepthSlice
    int& dyn_m_DepthSlice();
    // public System.Void .ctor(UnityEngine.Rendering.BuiltinRenderTextureType type)
    // Offset: 0x1E09CBC
    RenderTargetIdentifier(UnityEngine::Rendering::BuiltinRenderTextureType type);
    // public System.Void .ctor(System.Int32 nameID)
    // Offset: 0x1E09D24
    RenderTargetIdentifier(int nameID);
    // public System.Void .ctor(UnityEngine.Texture tex)
    // Offset: 0x1E09D8C
    RenderTargetIdentifier(UnityEngine::Texture* tex);
    // public System.Boolean Equals(UnityEngine.Rendering.RenderTargetIdentifier rhs)
    // Offset: 0x1E0A1B4
    bool Equals(UnityEngine::Rendering::RenderTargetIdentifier rhs);
    // public override System.String ToString()
    // Offset: 0x1E09FF0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0x1E0A15C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1E0A250
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // UnityEngine.Rendering.RenderTargetIdentifier
  #pragma pack(pop)
  static check_size<sizeof(RenderTargetIdentifier), 32 + sizeof(int)> __UnityEngine_Rendering_RenderTargetIdentifierSizeCheck;
  static_assert(sizeof(RenderTargetIdentifier) == 0x24);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::RenderTargetIdentifier, "UnityEngine.Rendering", "RenderTargetIdentifier");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderTargetIdentifier::RenderTargetIdentifier
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderTargetIdentifier::RenderTargetIdentifier
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderTargetIdentifier::RenderTargetIdentifier
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderTargetIdentifier::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::RenderTargetIdentifier::*)(UnityEngine::Rendering::RenderTargetIdentifier)>(&UnityEngine::Rendering::RenderTargetIdentifier::Equals)> {
  static const MethodInfo* get() {
    static auto* rhs = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderTargetIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderTargetIdentifier), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rhs});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderTargetIdentifier::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Rendering::RenderTargetIdentifier::*)()>(&UnityEngine::Rendering::RenderTargetIdentifier::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderTargetIdentifier), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderTargetIdentifier::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::RenderTargetIdentifier::*)()>(&UnityEngine::Rendering::RenderTargetIdentifier::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderTargetIdentifier), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderTargetIdentifier::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::RenderTargetIdentifier::*)(::Il2CppObject*)>(&UnityEngine::Rendering::RenderTargetIdentifier::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderTargetIdentifier), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
