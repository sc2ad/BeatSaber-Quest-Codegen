// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: ScoreMultiplierCounter
#include "GlobalNamespace/ScoreMultiplierCounter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteData
  class NoteData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ScoringElement
  class ScoringElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ScoringElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoringElement*, "", "ScoringElement");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: ScoringElement
  // [TokenAttribute] Offset: FFFFFFFF
  class ScoringElement : public ::Il2CppObject/*, public ::System::IComparable_1<::GlobalNamespace::ScoringElement*>*/ {
    public:
    // Nested type: ::GlobalNamespace::ScoringElement::Pool_1<T>
    template<typename T>
    class Pool_1;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private NoteData <noteData>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::NoteData* noteData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteData*) == 0x8);
    // private System.Int32 <multiplier>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int multiplier;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <maxMultiplier>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int maxMultiplier;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <isFinished>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool isFinished;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IComparable_1<::GlobalNamespace::ScoringElement*>
    operator ::System::IComparable_1<::GlobalNamespace::ScoringElement*>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::GlobalNamespace::ScoringElement*>*>(this);
    }
    // Get instance field reference: private NoteData <noteData>k__BackingField
    ::GlobalNamespace::NoteData*& dyn_$noteData$k__BackingField();
    // Get instance field reference: private System.Int32 <multiplier>k__BackingField
    int& dyn_$multiplier$k__BackingField();
    // Get instance field reference: private System.Int32 <maxMultiplier>k__BackingField
    int& dyn_$maxMultiplier$k__BackingField();
    // Get instance field reference: private System.Boolean <isFinished>k__BackingField
    bool& dyn_$isFinished$k__BackingField();
    // public NoteData get_noteData()
    // Offset: 0x1426190
    ::GlobalNamespace::NoteData* get_noteData();
    // protected System.Void set_noteData(NoteData value)
    // Offset: 0x1426198
    void set_noteData(::GlobalNamespace::NoteData* value);
    // public System.Int32 get_maxPossibleCutScore()
    // Offset: 0x1423820
    int get_maxPossibleCutScore();
    // public System.Single get_time()
    // Offset: 0x142374C
    float get_time();
    // public System.Int32 get_multiplier()
    // Offset: 0x14261A0
    int get_multiplier();
    // private System.Void set_multiplier(System.Int32 value)
    // Offset: 0x14261A8
    void set_multiplier(int value);
    // public System.Int32 get_maxMultiplier()
    // Offset: 0x14261B0
    int get_maxMultiplier();
    // private System.Void set_maxMultiplier(System.Int32 value)
    // Offset: 0x14261B8
    void set_maxMultiplier(int value);
    // public System.Int32 get_cutScore()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_cutScore();
    // public ScoreMultiplierCounter/MultiplierEventType get_wouldBeCorrectCutBestPossibleMultiplierEventType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::ScoreMultiplierCounter::MultiplierEventType get_wouldBeCorrectCutBestPossibleMultiplierEventType();
    // public ScoreMultiplierCounter/MultiplierEventType get_multiplierEventType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::ScoreMultiplierCounter::MultiplierEventType get_multiplierEventType();
    // public System.Boolean get_isFinished()
    // Offset: 0x14261C0
    bool get_isFinished();
    // protected System.Void set_isFinished(System.Boolean value)
    // Offset: 0x14261C8
    void set_isFinished(bool value);
    // protected System.Int32 get_executionOrder()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_executionOrder();
    // public System.Int32 CompareTo(ScoringElement other)
    // Offset: 0x14261D4
    int CompareTo(::GlobalNamespace::ScoringElement* other);
    // public System.Void SetMultipliers(System.Int32 multiplier, System.Int32 maxMultiplier)
    // Offset: 0x1423804
    void SetMultipliers(int multiplier, int maxMultiplier);
    // protected System.Void Reinitialize()
    // Offset: 0x1426268
    void Reinitialize();
    // protected System.Void .ctor()
    // Offset: 0x142626C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScoringElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ScoringElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScoringElement*, creationType>()));
    }
  }; // ScoringElement
  #pragma pack(pop)
  static check_size<sizeof(ScoringElement), 32 + sizeof(bool)> __GlobalNamespace_ScoringElementSizeCheck;
  static_assert(sizeof(ScoringElement) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScoringElement::get_noteData
// Il2CppName: get_noteData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteData* (GlobalNamespace::ScoringElement::*)()>(&GlobalNamespace::ScoringElement::get_noteData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoringElement*), "get_noteData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoringElement::set_noteData
// Il2CppName: set_noteData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoringElement::*)(::GlobalNamespace::NoteData*)>(&GlobalNamespace::ScoringElement::set_noteData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoringElement*), "set_noteData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoringElement::get_maxPossibleCutScore
// Il2CppName: get_maxPossibleCutScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ScoringElement::*)()>(&GlobalNamespace::ScoringElement::get_maxPossibleCutScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoringElement*), "get_maxPossibleCutScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoringElement::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ScoringElement::*)()>(&GlobalNamespace::ScoringElement::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoringElement*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoringElement::get_multiplier
// Il2CppName: get_multiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ScoringElement::*)()>(&GlobalNamespace::ScoringElement::get_multiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoringElement*), "get_multiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoringElement::set_multiplier
// Il2CppName: set_multiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoringElement::*)(int)>(&GlobalNamespace::ScoringElement::set_multiplier)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoringElement*), "set_multiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoringElement::get_maxMultiplier
// Il2CppName: get_maxMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ScoringElement::*)()>(&GlobalNamespace::ScoringElement::get_maxMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoringElement*), "get_maxMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoringElement::set_maxMultiplier
// Il2CppName: set_maxMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoringElement::*)(int)>(&GlobalNamespace::ScoringElement::set_maxMultiplier)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoringElement*), "set_maxMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoringElement::get_cutScore
// Il2CppName: get_cutScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ScoringElement::*)()>(&GlobalNamespace::ScoringElement::get_cutScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoringElement*), "get_cutScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoringElement::get_wouldBeCorrectCutBestPossibleMultiplierEventType
// Il2CppName: get_wouldBeCorrectCutBestPossibleMultiplierEventType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ScoreMultiplierCounter::MultiplierEventType (GlobalNamespace::ScoringElement::*)()>(&GlobalNamespace::ScoringElement::get_wouldBeCorrectCutBestPossibleMultiplierEventType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoringElement*), "get_wouldBeCorrectCutBestPossibleMultiplierEventType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoringElement::get_multiplierEventType
// Il2CppName: get_multiplierEventType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ScoreMultiplierCounter::MultiplierEventType (GlobalNamespace::ScoringElement::*)()>(&GlobalNamespace::ScoringElement::get_multiplierEventType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoringElement*), "get_multiplierEventType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoringElement::get_isFinished
// Il2CppName: get_isFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ScoringElement::*)()>(&GlobalNamespace::ScoringElement::get_isFinished)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoringElement*), "get_isFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoringElement::set_isFinished
// Il2CppName: set_isFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoringElement::*)(bool)>(&GlobalNamespace::ScoringElement::set_isFinished)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoringElement*), "set_isFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoringElement::get_executionOrder
// Il2CppName: get_executionOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ScoringElement::*)()>(&GlobalNamespace::ScoringElement::get_executionOrder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoringElement*), "get_executionOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoringElement::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ScoringElement::*)(::GlobalNamespace::ScoringElement*)>(&GlobalNamespace::ScoringElement::CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "ScoringElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoringElement*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoringElement::SetMultipliers
// Il2CppName: SetMultipliers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoringElement::*)(int, int)>(&GlobalNamespace::ScoringElement::SetMultipliers)> {
  static const MethodInfo* get() {
    static auto* multiplier = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxMultiplier = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoringElement*), "SetMultipliers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiplier, maxMultiplier});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoringElement::Reinitialize
// Il2CppName: Reinitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoringElement::*)()>(&GlobalNamespace::ScoringElement::Reinitialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoringElement*), "Reinitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoringElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
