// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDataCallbackWrapper
#include "GlobalNamespace/BeatmapDataCallbackWrapper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataItem
  class BeatmapDataItem;
  // Forward declaring type: BeatmapDataCallback`1<T>
  template<typename T>
  class BeatmapDataCallback_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataCallbackWrapper`1<T>
  template<typename T>
  class BeatmapDataCallbackWrapper_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::BeatmapDataCallbackWrapper_1, "", "BeatmapDataCallbackWrapper`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapDataCallbackWrapper`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class BeatmapDataCallbackWrapper_1 : public ::GlobalNamespace::BeatmapDataCallbackWrapper {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly BeatmapDataCallback`1<T> _callback
    // Size: 0x8
    // Offset: 0x0
    ::GlobalNamespace::BeatmapDataCallback_1<T>* callback;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataCallback_1<T>*) == 0x8);
    public:
    // Creating conversion operator: operator ::GlobalNamespace::BeatmapDataCallback_1<T>*
    constexpr operator ::GlobalNamespace::BeatmapDataCallback_1<T>*() const noexcept {
      return callback;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly BeatmapDataCallback`1<T> _callback
    ::GlobalNamespace::BeatmapDataCallback_1<T>*& dyn__callback() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataCallbackWrapper_1::dyn__callback");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_callback"))->offset;
      return *reinterpret_cast<::GlobalNamespace::BeatmapDataCallback_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(BeatmapDataCallback`1<T> callback, System.Single aheadTime, params System.Int32[] beatmapEventSubtypeIdentifiers)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataCallbackWrapper_1<T>* New_ctor(::GlobalNamespace::BeatmapDataCallback_1<T>* callback, float aheadTime, ::ArrayW<int> beatmapEventSubtypeIdentifiers) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataCallbackWrapper_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataCallbackWrapper_1<T>*, creationType>(callback, aheadTime, beatmapEventSubtypeIdentifiers)));
    }
    // public override System.Void CallCallback(BeatmapDataItem beatmapData)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: BeatmapDataCallbackWrapper
    // Base method: System.Void BeatmapDataCallbackWrapper::CallCallback(BeatmapDataItem beatmapData)
    void CallCallback(::GlobalNamespace::BeatmapDataItem* beatmapData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataCallbackWrapper_1::CallCallback");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CallCallback", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(beatmapData)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, beatmapData);
    }
  }; // BeatmapDataCallbackWrapper`1
  // Could not write size check! Type: BeatmapDataCallbackWrapper`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
