// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
  // Forward declaring type: TMP_SpriteAsset
  class TMP_SpriteAsset;
  // Forward declaring type: TMP_ColorGradient
  class TMP_ColorGradient;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: MaterialReferenceManager
  class MaterialReferenceManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::MaterialReferenceManager);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::MaterialReferenceManager*, "TMPro", "MaterialReferenceManager");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.MaterialReferenceManager
  // [TokenAttribute] Offset: FFFFFFFF
  class MaterialReferenceManager : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Material> m_FontMaterialReferenceLookup
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::Material*>* m_FontMaterialReferenceLookup;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::Material*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_FontAsset> m_FontAssetReferenceLookup
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<int, ::TMPro::TMP_FontAsset*>* m_FontAssetReferenceLookup;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::TMPro::TMP_FontAsset*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_SpriteAsset> m_SpriteAssetReferenceLookup
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<int, ::TMPro::TMP_SpriteAsset*>* m_SpriteAssetReferenceLookup;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::TMPro::TMP_SpriteAsset*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_ColorGradient> m_ColorGradientReferenceLookup
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<int, ::TMPro::TMP_ColorGradient*>* m_ColorGradientReferenceLookup;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::TMPro::TMP_ColorGradient*>*) == 0x8);
    public:
    // Get static field: static private TMPro.MaterialReferenceManager s_Instance
    static ::TMPro::MaterialReferenceManager* _get_s_Instance();
    // Set static field: static private TMPro.MaterialReferenceManager s_Instance
    static void _set_s_Instance(::TMPro::MaterialReferenceManager* value);
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Material> m_FontMaterialReferenceLookup
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::Material*>*& dyn_m_FontMaterialReferenceLookup();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_FontAsset> m_FontAssetReferenceLookup
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::TMPro::TMP_FontAsset*>*& dyn_m_FontAssetReferenceLookup();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_SpriteAsset> m_SpriteAssetReferenceLookup
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::TMPro::TMP_SpriteAsset*>*& dyn_m_SpriteAssetReferenceLookup();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_ColorGradient> m_ColorGradientReferenceLookup
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::TMPro::TMP_ColorGradient*>*& dyn_m_ColorGradientReferenceLookup();
    // static public TMPro.MaterialReferenceManager get_instance()
    // Offset: 0x149ABE4
    static ::TMPro::MaterialReferenceManager* get_instance();
    // public System.Void .ctor()
    // Offset: 0x149AC60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialReferenceManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::MaterialReferenceManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialReferenceManager*, creationType>()));
    }
    // static public System.Void AddFontAsset(TMPro.TMP_FontAsset fontAsset)
    // Offset: 0x149AD48
    static void AddFontAsset(::TMPro::TMP_FontAsset* fontAsset);
    // private System.Void AddFontAssetInternal(TMPro.TMP_FontAsset fontAsset)
    // Offset: 0x149AD74
    void AddFontAssetInternal(::TMPro::TMP_FontAsset* fontAsset);
    // static public System.Void AddSpriteAsset(TMPro.TMP_SpriteAsset spriteAsset)
    // Offset: 0x149AE34
    static void AddSpriteAsset(::TMPro::TMP_SpriteAsset* spriteAsset);
    // private System.Void AddSpriteAssetInternal(TMPro.TMP_SpriteAsset spriteAsset)
    // Offset: 0x149AE60
    void AddSpriteAssetInternal(::TMPro::TMP_SpriteAsset* spriteAsset);
    // static public System.Void AddSpriteAsset(System.Int32 hashCode, TMPro.TMP_SpriteAsset spriteAsset)
    // Offset: 0x149AF20
    static void AddSpriteAsset(int hashCode, ::TMPro::TMP_SpriteAsset* spriteAsset);
    // private System.Void AddSpriteAssetInternal(System.Int32 hashCode, TMPro.TMP_SpriteAsset spriteAsset)
    // Offset: 0x149AF54
    void AddSpriteAssetInternal(int hashCode, ::TMPro::TMP_SpriteAsset* spriteAsset);
    // static public System.Void AddFontMaterial(System.Int32 hashCode, UnityEngine.Material material)
    // Offset: 0x149B018
    static void AddFontMaterial(int hashCode, ::UnityEngine::Material* material);
    // private System.Void AddFontMaterialInternal(System.Int32 hashCode, UnityEngine.Material material)
    // Offset: 0x149B04C
    void AddFontMaterialInternal(int hashCode, ::UnityEngine::Material* material);
    // static public System.Void AddColorGradientPreset(System.Int32 hashCode, TMPro.TMP_ColorGradient spriteAsset)
    // Offset: 0x149B0BC
    static void AddColorGradientPreset(int hashCode, ::TMPro::TMP_ColorGradient* spriteAsset);
    // private System.Void AddColorGradientPreset_Internal(System.Int32 hashCode, TMPro.TMP_ColorGradient spriteAsset)
    // Offset: 0x149B0F0
    void AddColorGradientPreset_Internal(int hashCode, ::TMPro::TMP_ColorGradient* spriteAsset);
    // public System.Boolean Contains(TMPro.TMP_FontAsset font)
    // Offset: 0x149B190
    bool Contains(::TMPro::TMP_FontAsset* font);
    // public System.Boolean Contains(TMPro.TMP_SpriteAsset sprite)
    // Offset: 0x149B1FC
    bool Contains(::TMPro::TMP_SpriteAsset* sprite);
    // static public System.Boolean TryGetFontAsset(System.Int32 hashCode, out TMPro.TMP_FontAsset fontAsset)
    // Offset: 0x149B268
    static bool TryGetFontAsset(int hashCode, ByRef<::TMPro::TMP_FontAsset*> fontAsset);
    // private System.Boolean TryGetFontAssetInternal(System.Int32 hashCode, out TMPro.TMP_FontAsset fontAsset)
    // Offset: 0x149B29C
    bool TryGetFontAssetInternal(int hashCode, ByRef<::TMPro::TMP_FontAsset*> fontAsset);
    // static public System.Boolean TryGetSpriteAsset(System.Int32 hashCode, out TMPro.TMP_SpriteAsset spriteAsset)
    // Offset: 0x149B310
    static bool TryGetSpriteAsset(int hashCode, ByRef<::TMPro::TMP_SpriteAsset*> spriteAsset);
    // private System.Boolean TryGetSpriteAssetInternal(System.Int32 hashCode, out TMPro.TMP_SpriteAsset spriteAsset)
    // Offset: 0x149B344
    bool TryGetSpriteAssetInternal(int hashCode, ByRef<::TMPro::TMP_SpriteAsset*> spriteAsset);
    // static public System.Boolean TryGetColorGradientPreset(System.Int32 hashCode, out TMPro.TMP_ColorGradient gradientPreset)
    // Offset: 0x149B3B8
    static bool TryGetColorGradientPreset(int hashCode, ByRef<::TMPro::TMP_ColorGradient*> gradientPreset);
    // private System.Boolean TryGetColorGradientPresetInternal(System.Int32 hashCode, out TMPro.TMP_ColorGradient gradientPreset)
    // Offset: 0x149B3EC
    bool TryGetColorGradientPresetInternal(int hashCode, ByRef<::TMPro::TMP_ColorGradient*> gradientPreset);
    // static public System.Boolean TryGetMaterial(System.Int32 hashCode, out UnityEngine.Material material)
    // Offset: 0x149B460
    static bool TryGetMaterial(int hashCode, ByRef<::UnityEngine::Material*> material);
    // private System.Boolean TryGetMaterialInternal(System.Int32 hashCode, out UnityEngine.Material material)
    // Offset: 0x149B494
    bool TryGetMaterialInternal(int hashCode, ByRef<::UnityEngine::Material*> material);
  }; // TMPro.MaterialReferenceManager
  #pragma pack(pop)
  static check_size<sizeof(MaterialReferenceManager), 40 + sizeof(::System::Collections::Generic::Dictionary_2<int, ::TMPro::TMP_ColorGradient*>*)> __TMPro_MaterialReferenceManagerSizeCheck;
  static_assert(sizeof(MaterialReferenceManager) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::MaterialReferenceManager* (*)()>(&TMPro::MaterialReferenceManager::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::AddFontAsset
// Il2CppName: AddFontAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::TMPro::TMP_FontAsset*)>(&TMPro::MaterialReferenceManager::AddFontAsset)> {
  static const MethodInfo* get() {
    static auto* fontAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "AddFontAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fontAsset});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::AddFontAssetInternal
// Il2CppName: AddFontAssetInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::MaterialReferenceManager::*)(::TMPro::TMP_FontAsset*)>(&TMPro::MaterialReferenceManager::AddFontAssetInternal)> {
  static const MethodInfo* get() {
    static auto* fontAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "AddFontAssetInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fontAsset});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::AddSpriteAsset
// Il2CppName: AddSpriteAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::TMPro::TMP_SpriteAsset*)>(&TMPro::MaterialReferenceManager::AddSpriteAsset)> {
  static const MethodInfo* get() {
    static auto* spriteAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_SpriteAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "AddSpriteAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spriteAsset});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::AddSpriteAssetInternal
// Il2CppName: AddSpriteAssetInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::MaterialReferenceManager::*)(::TMPro::TMP_SpriteAsset*)>(&TMPro::MaterialReferenceManager::AddSpriteAssetInternal)> {
  static const MethodInfo* get() {
    static auto* spriteAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_SpriteAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "AddSpriteAssetInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spriteAsset});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::AddSpriteAsset
// Il2CppName: AddSpriteAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::TMPro::TMP_SpriteAsset*)>(&TMPro::MaterialReferenceManager::AddSpriteAsset)> {
  static const MethodInfo* get() {
    static auto* hashCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* spriteAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_SpriteAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "AddSpriteAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashCode, spriteAsset});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::AddSpriteAssetInternal
// Il2CppName: AddSpriteAssetInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::MaterialReferenceManager::*)(int, ::TMPro::TMP_SpriteAsset*)>(&TMPro::MaterialReferenceManager::AddSpriteAssetInternal)> {
  static const MethodInfo* get() {
    static auto* hashCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* spriteAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_SpriteAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "AddSpriteAssetInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashCode, spriteAsset});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::AddFontMaterial
// Il2CppName: AddFontMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::UnityEngine::Material*)>(&TMPro::MaterialReferenceManager::AddFontMaterial)> {
  static const MethodInfo* get() {
    static auto* hashCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "AddFontMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashCode, material});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::AddFontMaterialInternal
// Il2CppName: AddFontMaterialInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::MaterialReferenceManager::*)(int, ::UnityEngine::Material*)>(&TMPro::MaterialReferenceManager::AddFontMaterialInternal)> {
  static const MethodInfo* get() {
    static auto* hashCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "AddFontMaterialInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashCode, material});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::AddColorGradientPreset
// Il2CppName: AddColorGradientPreset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::TMPro::TMP_ColorGradient*)>(&TMPro::MaterialReferenceManager::AddColorGradientPreset)> {
  static const MethodInfo* get() {
    static auto* hashCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* spriteAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_ColorGradient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "AddColorGradientPreset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashCode, spriteAsset});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::AddColorGradientPreset_Internal
// Il2CppName: AddColorGradientPreset_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::MaterialReferenceManager::*)(int, ::TMPro::TMP_ColorGradient*)>(&TMPro::MaterialReferenceManager::AddColorGradientPreset_Internal)> {
  static const MethodInfo* get() {
    static auto* hashCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* spriteAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_ColorGradient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "AddColorGradientPreset_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashCode, spriteAsset});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::MaterialReferenceManager::*)(::TMPro::TMP_FontAsset*)>(&TMPro::MaterialReferenceManager::Contains)> {
  static const MethodInfo* get() {
    static auto* font = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{font});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::MaterialReferenceManager::*)(::TMPro::TMP_SpriteAsset*)>(&TMPro::MaterialReferenceManager::Contains)> {
  static const MethodInfo* get() {
    static auto* sprite = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_SpriteAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sprite});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::TryGetFontAsset
// Il2CppName: TryGetFontAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, ByRef<::TMPro::TMP_FontAsset*>)>(&TMPro::MaterialReferenceManager::TryGetFontAsset)> {
  static const MethodInfo* get() {
    static auto* hashCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fontAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "TryGetFontAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashCode, fontAsset});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::TryGetFontAssetInternal
// Il2CppName: TryGetFontAssetInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::MaterialReferenceManager::*)(int, ByRef<::TMPro::TMP_FontAsset*>)>(&TMPro::MaterialReferenceManager::TryGetFontAssetInternal)> {
  static const MethodInfo* get() {
    static auto* hashCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fontAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "TryGetFontAssetInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashCode, fontAsset});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::TryGetSpriteAsset
// Il2CppName: TryGetSpriteAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, ByRef<::TMPro::TMP_SpriteAsset*>)>(&TMPro::MaterialReferenceManager::TryGetSpriteAsset)> {
  static const MethodInfo* get() {
    static auto* hashCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* spriteAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_SpriteAsset")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "TryGetSpriteAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashCode, spriteAsset});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::TryGetSpriteAssetInternal
// Il2CppName: TryGetSpriteAssetInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::MaterialReferenceManager::*)(int, ByRef<::TMPro::TMP_SpriteAsset*>)>(&TMPro::MaterialReferenceManager::TryGetSpriteAssetInternal)> {
  static const MethodInfo* get() {
    static auto* hashCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* spriteAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_SpriteAsset")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "TryGetSpriteAssetInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashCode, spriteAsset});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::TryGetColorGradientPreset
// Il2CppName: TryGetColorGradientPreset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, ByRef<::TMPro::TMP_ColorGradient*>)>(&TMPro::MaterialReferenceManager::TryGetColorGradientPreset)> {
  static const MethodInfo* get() {
    static auto* hashCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* gradientPreset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_ColorGradient")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "TryGetColorGradientPreset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashCode, gradientPreset});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::TryGetColorGradientPresetInternal
// Il2CppName: TryGetColorGradientPresetInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::MaterialReferenceManager::*)(int, ByRef<::TMPro::TMP_ColorGradient*>)>(&TMPro::MaterialReferenceManager::TryGetColorGradientPresetInternal)> {
  static const MethodInfo* get() {
    static auto* hashCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* gradientPreset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_ColorGradient")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "TryGetColorGradientPresetInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashCode, gradientPreset});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::TryGetMaterial
// Il2CppName: TryGetMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, ByRef<::UnityEngine::Material*>)>(&TMPro::MaterialReferenceManager::TryGetMaterial)> {
  static const MethodInfo* get() {
    static auto* hashCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "TryGetMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashCode, material});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReferenceManager::TryGetMaterialInternal
// Il2CppName: TryGetMaterialInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::MaterialReferenceManager::*)(int, ByRef<::UnityEngine::Material*>)>(&TMPro::MaterialReferenceManager::TryGetMaterialInternal)> {
  static const MethodInfo* get() {
    static auto* hashCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReferenceManager*), "TryGetMaterialInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashCode, material});
  }
};
