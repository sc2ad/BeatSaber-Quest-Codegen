// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BasicSpectrogramData
  class BasicSpectrogramData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SpectrogramRow
  class SpectrogramRow;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SpectrogramRow);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpectrogramRow*, "", "SpectrogramRow");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SpectrogramRow
  // [TokenAttribute] Offset: FFFFFFFF
  class SpectrogramRow : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.MeshRenderer[] _meshRenderers
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::MeshRenderer*> meshRenderers;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::MeshRenderer*>) == 0x8);
    // private System.Int32 _dataIndex
    // Size: 0x4
    // Offset: 0x20
    int dataIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: dataIndex and: spectrogramData
    char __padding1[0x4] = {};
    // [InjectAttribute] Offset: 0x1100858
    // private readonly BasicSpectrogramData _spectrogramData
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BasicSpectrogramData* spectrogramData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BasicSpectrogramData*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1100868
    // Get static field: static private readonly System.Int32 _spectrogramDataID
    static int _get__spectrogramDataID();
    // Set static field: static private readonly System.Int32 _spectrogramDataID
    static void _set__spectrogramDataID(int value);
    // Get static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static ::UnityEngine::MaterialPropertyBlock* _get__materialPropertyBlock();
    // Set static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static void _set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);
    // Get instance field reference: private UnityEngine.MeshRenderer[] _meshRenderers
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::MeshRenderer*>& dyn__meshRenderers();
    // Get instance field reference: private System.Int32 _dataIndex
    [[deprecated("Use field access instead!")]] int& dyn__dataIndex();
    // Get instance field reference: private readonly BasicSpectrogramData _spectrogramData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BasicSpectrogramData*& dyn__spectrogramData();
    // public System.Void .ctor()
    // Offset: 0x14C59C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpectrogramRow* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpectrogramRow::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpectrogramRow*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x14C59C8
    static void _cctor();
    // protected System.Void Awake()
    // Offset: 0x14C57CC
    void Awake();
    // protected System.Void Update()
    // Offset: 0x14C5878
    void Update();
  }; // SpectrogramRow
  #pragma pack(pop)
  static check_size<sizeof(SpectrogramRow), 40 + sizeof(::GlobalNamespace::BasicSpectrogramData*)> __GlobalNamespace_SpectrogramRowSizeCheck;
  static_assert(sizeof(SpectrogramRow) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SpectrogramRow::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SpectrogramRow::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SpectrogramRow::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpectrogramRow*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpectrogramRow::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpectrogramRow::*)()>(&GlobalNamespace::SpectrogramRow::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpectrogramRow*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpectrogramRow::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpectrogramRow::*)()>(&GlobalNamespace::SpectrogramRow::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpectrogramRow*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
