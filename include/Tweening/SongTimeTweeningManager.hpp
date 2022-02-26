// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Tweening.TweeningManager
#include "Tweening/TweeningManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
}
// Completed forward declares
// Type namespace: Tweening
namespace Tweening {
  // Forward declaring type: SongTimeTweeningManager
  class SongTimeTweeningManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Tweening::SongTimeTweeningManager);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::SongTimeTweeningManager*, "Tweening", "SongTimeTweeningManager");
// Type namespace: Tweening
namespace Tweening {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Tweening.SongTimeTweeningManager
  // [TokenAttribute] Offset: FFFFFFFF
  class SongTimeTweeningManager : public ::Tweening::TweeningManager {
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
    // [InjectAttribute] Offset: 0x1251560
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAudioTimeSource*) == 0x8);
    public:
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSource
    ::GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSource();
    // public System.Void .ctor()
    // Offset: 0x2AEF58C
    // Implemented from: Tweening.TweeningManager
    // Base method: System.Void TweeningManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongTimeTweeningManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Tweening::SongTimeTweeningManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongTimeTweeningManager*, creationType>()));
    }
    // protected override System.Single GetTime()
    // Offset: 0x2AEF4DC
    // Implemented from: Tweening.TweeningManager
    // Base method: System.Single TweeningManager::GetTime()
    float GetTime();
  }; // Tweening.SongTimeTweeningManager
  #pragma pack(pop)
  static check_size<sizeof(SongTimeTweeningManager), 56 + sizeof(::GlobalNamespace::IAudioTimeSource*)> __Tweening_SongTimeTweeningManagerSizeCheck;
  static_assert(sizeof(SongTimeTweeningManager) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Tweening::SongTimeTweeningManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Tweening::SongTimeTweeningManager::GetTime
// Il2CppName: GetTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Tweening::SongTimeTweeningManager::*)()>(&Tweening::SongTimeTweeningManager::GetTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tweening::SongTimeTweeningManager*), "GetTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
