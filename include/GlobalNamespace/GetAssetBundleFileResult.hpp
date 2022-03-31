// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GetAssetBundleFileResult
  struct GetAssetBundleFileResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GetAssetBundleFileResult, "", "GetAssetBundleFileResult");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: GetAssetBundleFileResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct GetAssetBundleFileResult/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly System.Boolean isError
    // Size: 0x1
    // Offset: 0x0
    bool isError;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isError and: assetBundlePath
    char __padding0[0x7] = {};
    // public readonly System.String assetBundlePath
    // Size: 0x8
    // Offset: 0x8
    ::StringW assetBundlePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: GetAssetBundleFileResult
    constexpr GetAssetBundleFileResult(bool isError_ = {}, ::StringW assetBundlePath_ = {}) noexcept : isError{isError_}, assetBundlePath{assetBundlePath_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly System.Boolean isError
    bool& dyn_isError();
    // Get instance field reference: public readonly System.String assetBundlePath
    ::StringW& dyn_assetBundlePath();
    // public System.Void .ctor(System.Boolean isError, System.String assetBundlePath)
    // Offset: 0x13E9168
    // ABORTED: conflicts with another method.  GetAssetBundleFileResult(bool isError, ::StringW assetBundlePath);
  }; // GetAssetBundleFileResult
  #pragma pack(pop)
  static check_size<sizeof(GetAssetBundleFileResult), 8 + sizeof(::StringW)> __GlobalNamespace_GetAssetBundleFileResultSizeCheck;
  static_assert(sizeof(GetAssetBundleFileResult) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GetAssetBundleFileResult::GetAssetBundleFileResult
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
