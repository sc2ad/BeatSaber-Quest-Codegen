// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.TerrainAPI.TerrainUtility
#include "UnityEngine/Experimental/TerrainAPI/TerrainUtility.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Terrain
  class Terrain;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::TerrainAPI::TerrainUtility::$$c__DisplayClass4_1);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::TerrainAPI::TerrainUtility::$$c__DisplayClass4_1*, "UnityEngine.Experimental.TerrainAPI", "TerrainUtility/<>c__DisplayClass4_1");
// Type namespace: UnityEngine.Experimental.TerrainAPI
namespace UnityEngine::Experimental::TerrainAPI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.<>c__DisplayClass4_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TerrainUtility::$$c__DisplayClass4_1 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Terrain t
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Terrain* t;
    // Field size check
    static_assert(sizeof(::UnityEngine::Terrain*) == 0x8);
    // public UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.<>c__DisplayClass4_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Experimental::TerrainAPI::TerrainUtility::$$c__DisplayClass4_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::TerrainAPI::TerrainUtility::$$c__DisplayClass4_0*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Terrain t
    [[deprecated("Use field access instead!")]] ::UnityEngine::Terrain*& dyn_t();
    // Get instance field reference: public UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.<>c__DisplayClass4_0 CS$<>8__locals1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::TerrainAPI::TerrainUtility::$$c__DisplayClass4_0*& dyn_CS$$$8__locals1();
    // public System.Void .ctor()
    // Offset: 0x2B0CED8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TerrainUtility::$$c__DisplayClass4_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::TerrainAPI::TerrainUtility::$$c__DisplayClass4_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TerrainUtility::$$c__DisplayClass4_1*, creationType>()));
    }
    // System.Boolean <CollectTerrains>b__0(UnityEngine.Terrain x)
    // Offset: 0x2B0D5D0
    bool $CollectTerrains$b__0(::UnityEngine::Terrain* x);
  }; // UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.<>c__DisplayClass4_1
  #pragma pack(pop)
  static check_size<sizeof(TerrainUtility::$$c__DisplayClass4_1), 24 + sizeof(::UnityEngine::Experimental::TerrainAPI::TerrainUtility::$$c__DisplayClass4_0*)> __UnityEngine_Experimental_TerrainAPI_TerrainUtility_$$c__DisplayClass4_1SizeCheck;
  static_assert(sizeof(TerrainUtility::$$c__DisplayClass4_1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::$$c__DisplayClass4_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::$$c__DisplayClass4_1::$CollectTerrains$b__0
// Il2CppName: <CollectTerrains>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Experimental::TerrainAPI::TerrainUtility::$$c__DisplayClass4_1::*)(::UnityEngine::Terrain*)>(&UnityEngine::Experimental::TerrainAPI::TerrainUtility::$$c__DisplayClass4_1::$CollectTerrains$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainUtility::$$c__DisplayClass4_1*), "<CollectTerrains>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
