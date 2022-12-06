// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Hash128
#include "UnityEngine/Hash128.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CachedAssetBundle
  struct CachedAssetBundle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CachedAssetBundle, "UnityEngine", "CachedAssetBundle");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.CachedAssetBundle
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 1082AA0
  struct CachedAssetBundle/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.String m_Name
    // Size: 0x8
    // Offset: 0x0
    ::StringW m_Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.Hash128 m_Hash
    // Size: 0x10
    // Offset: 0x8
    ::UnityEngine::Hash128 m_Hash;
    // Field size check
    static_assert(sizeof(::UnityEngine::Hash128) == 0x10);
    public:
    // Creating value type constructor for type: CachedAssetBundle
    constexpr CachedAssetBundle(::StringW m_Name_ = {}, ::UnityEngine::Hash128 m_Hash_ = {}) noexcept : m_Name{m_Name_}, m_Hash{m_Hash_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.String m_Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Name();
    // Get instance field reference: private UnityEngine.Hash128 m_Hash
    [[deprecated("Use field access instead!")]] ::UnityEngine::Hash128& dyn_m_Hash();
    // public System.String get_name()
    // Offset: 0x2027590
    ::StringW get_name();
    // public UnityEngine.Hash128 get_hash()
    // Offset: 0x2027598
    ::UnityEngine::Hash128 get_hash();
    // public System.Void .ctor(System.String name, UnityEngine.Hash128 hash)
    // Offset: 0x2027584
    // ABORTED: conflicts with another method.  CachedAssetBundle(::StringW name, ::UnityEngine::Hash128 hash);
  }; // UnityEngine.CachedAssetBundle
  #pragma pack(pop)
  static check_size<sizeof(CachedAssetBundle), 8 + sizeof(::UnityEngine::Hash128)> __UnityEngine_CachedAssetBundleSizeCheck;
  static_assert(sizeof(CachedAssetBundle) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::CachedAssetBundle::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::CachedAssetBundle::*)()>(&UnityEngine::CachedAssetBundle::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CachedAssetBundle), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CachedAssetBundle::get_hash
// Il2CppName: get_hash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Hash128 (UnityEngine::CachedAssetBundle::*)()>(&UnityEngine::CachedAssetBundle::get_hash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CachedAssetBundle), "get_hash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CachedAssetBundle::CachedAssetBundle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
