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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_WorkItemTally
  class HEU_WorkItemTally;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_WorkItemTally);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_WorkItemTally*, "HoudiniEngineUnity", "HEU_WorkItemTally");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_WorkItemTally
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_WorkItemTally : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 _totalWorkItems
    // Size: 0x4
    // Offset: 0x10
    int totalWorkItems;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 _waitingWorkItems
    // Size: 0x4
    // Offset: 0x14
    int waitingWorkItems;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 _scheduledWorkItems
    // Size: 0x4
    // Offset: 0x18
    int scheduledWorkItems;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 _cookingWorkItems
    // Size: 0x4
    // Offset: 0x1C
    int cookingWorkItems;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 _cookedWorkItems
    // Size: 0x4
    // Offset: 0x20
    int cookedWorkItems;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 _erroredWorkItems
    // Size: 0x4
    // Offset: 0x24
    int erroredWorkItems;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Int32 _totalWorkItems
    [[deprecated("Use field access instead!")]] int& dyn__totalWorkItems();
    // Get instance field reference: public System.Int32 _waitingWorkItems
    [[deprecated("Use field access instead!")]] int& dyn__waitingWorkItems();
    // Get instance field reference: public System.Int32 _scheduledWorkItems
    [[deprecated("Use field access instead!")]] int& dyn__scheduledWorkItems();
    // Get instance field reference: public System.Int32 _cookingWorkItems
    [[deprecated("Use field access instead!")]] int& dyn__cookingWorkItems();
    // Get instance field reference: public System.Int32 _cookedWorkItems
    [[deprecated("Use field access instead!")]] int& dyn__cookedWorkItems();
    // Get instance field reference: public System.Int32 _erroredWorkItems
    [[deprecated("Use field access instead!")]] int& dyn__erroredWorkItems();
    // public System.Void .ctor()
    // Offset: 0x1A60F50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_WorkItemTally* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_WorkItemTally::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_WorkItemTally*, creationType>()));
    }
    // public System.Void ZeroAll()
    // Offset: 0x1A60DDC
    void ZeroAll();
    // public System.Boolean AreAllWorkItemsComplete()
    // Offset: 0x1A60DE8
    bool AreAllWorkItemsComplete();
    // public System.Boolean AnyWorkItemsFailed()
    // Offset: 0x1A60E20
    bool AnyWorkItemsFailed();
    // public System.Boolean AnyWorkItemsPending()
    // Offset: 0x1A60E30
    bool AnyWorkItemsPending();
    // public System.String ProgressRatio()
    // Offset: 0x1A60E74
    ::StringW ProgressRatio();
  }; // HoudiniEngineUnity.HEU_WorkItemTally
  #pragma pack(pop)
  static check_size<sizeof(HEU_WorkItemTally), 36 + sizeof(int)> __HoudiniEngineUnity_HEU_WorkItemTallySizeCheck;
  static_assert(sizeof(HEU_WorkItemTally) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_WorkItemTally::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_WorkItemTally::ZeroAll
// Il2CppName: ZeroAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_WorkItemTally::*)()>(&HoudiniEngineUnity::HEU_WorkItemTally::ZeroAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_WorkItemTally*), "ZeroAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_WorkItemTally::AreAllWorkItemsComplete
// Il2CppName: AreAllWorkItemsComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_WorkItemTally::*)()>(&HoudiniEngineUnity::HEU_WorkItemTally::AreAllWorkItemsComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_WorkItemTally*), "AreAllWorkItemsComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_WorkItemTally::AnyWorkItemsFailed
// Il2CppName: AnyWorkItemsFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_WorkItemTally::*)()>(&HoudiniEngineUnity::HEU_WorkItemTally::AnyWorkItemsFailed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_WorkItemTally*), "AnyWorkItemsFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_WorkItemTally::AnyWorkItemsPending
// Il2CppName: AnyWorkItemsPending
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_WorkItemTally::*)()>(&HoudiniEngineUnity::HEU_WorkItemTally::AnyWorkItemsPending)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_WorkItemTally*), "AnyWorkItemsPending", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_WorkItemTally::ProgressRatio
// Il2CppName: ProgressRatio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HoudiniEngineUnity::HEU_WorkItemTally::*)()>(&HoudiniEngineUnity::HEU_WorkItemTally::ProgressRatio)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_WorkItemTally*), "ProgressRatio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
