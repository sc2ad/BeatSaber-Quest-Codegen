// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ReferenceCountingCache`2
#include "GlobalNamespace/ReferenceCountingCache_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AudioReferenceCountingCache
  class AudioReferenceCountingCache;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AudioReferenceCountingCache);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioReferenceCountingCache*, "", "AudioReferenceCountingCache");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: AudioReferenceCountingCache
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioReferenceCountingCache : public ::GlobalNamespace::ReferenceCountingCache_2<int, ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x153E050
    // Implemented from: ReferenceCountingCache`2
    // Base method: System.Void ReferenceCountingCache_2::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioReferenceCountingCache* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AudioReferenceCountingCache::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioReferenceCountingCache*, creationType>()));
    }
  }; // AudioReferenceCountingCache
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AudioReferenceCountingCache::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
