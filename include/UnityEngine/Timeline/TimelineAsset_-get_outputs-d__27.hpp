// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.TimelineAsset
#include "UnityEngine/Timeline/TimelineAsset.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: UnityEngine.Playables.PlayableBinding
#include "UnityEngine/Playables/PlayableBinding.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TrackAsset
  class TrackAsset;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.<get_outputs>d__27
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TimelineAsset::$get_outputs$d__27 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>, public System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private UnityEngine.Playables.PlayableBinding <>2__current
    // Size: 0x20
    // Offset: 0x18
    UnityEngine::Playables::PlayableBinding $$2__current;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableBinding) == 0x20);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x38
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public UnityEngine.Timeline.TimelineAsset <>4__this
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Timeline::TimelineAsset* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::TimelineAsset*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Timeline.TrackAsset> <>7__wrap1
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::IEnumerator_1<UnityEngine::Timeline::TrackAsset*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerator_1<UnityEngine::Timeline::TrackAsset*>*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> <>7__wrap2
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>* $$7__wrap2;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>
    operator System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>
    operator System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private UnityEngine.Playables.PlayableBinding <>2__current
    UnityEngine::Playables::PlayableBinding& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    int& dyn_$$l__initialThreadId();
    // Get instance field reference: public UnityEngine.Timeline.TimelineAsset <>4__this
    UnityEngine::Timeline::TimelineAsset*& dyn_$$4__this();
    // Get instance field reference: private System.Collections.Generic.IEnumerator`1<UnityEngine.Timeline.TrackAsset> <>7__wrap1
    System::Collections::Generic::IEnumerator_1<UnityEngine::Timeline::TrackAsset*>*& dyn_$$7__wrap1();
    // Get instance field reference: private System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> <>7__wrap2
    System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>*& dyn_$$7__wrap2();
    // private UnityEngine.Playables.PlayableBinding System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current()
    // Offset: 0x255F79C
    UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator$UnityEngine_Playables_PlayableBinding$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x255F80C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x255F120
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimelineAsset::$get_outputs$d__27* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimelineAsset::$get_outputs$d__27*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x255F158
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x255F368
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x255F2A8
    void $$m__Finally1();
    // private System.Void <>m__Finally2()
    // Offset: 0x255F1E8
    void $$m__Finally2();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x255F7AC
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator()
    // Offset: 0x255F874
    System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable$UnityEngine_Playables_PlayableBinding$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x255F920
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.<get_outputs>d__27
  #pragma pack(pop)
  static check_size<sizeof(TimelineAsset::$get_outputs$d__27), 80 + sizeof(System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>*)> __UnityEngine_Timeline_TimelineAsset_$get_outputs$d__27SizeCheck;
  static_assert(sizeof(TimelineAsset::$get_outputs$d__27) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27*, "UnityEngine.Timeline", "TimelineAsset/<get_outputs>d__27");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::System_Collections_Generic_IEnumerator$UnityEngine_Playables_PlayableBinding$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableBinding (UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::*)()>(&UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::System_Collections_Generic_IEnumerator$UnityEngine_Playables_PlayableBinding$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27*), "System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::*)()>(&UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::*)()>(&UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::*)()>(&UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::*)()>(&UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::$$m__Finally2
// Il2CppName: <>m__Finally2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::*)()>(&UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::$$m__Finally2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27*), "<>m__Finally2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::*)()>(&UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::System_Collections_Generic_IEnumerable$UnityEngine_Playables_PlayableBinding$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>* (UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::*)()>(&UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::System_Collections_Generic_IEnumerable$UnityEngine_Playables_PlayableBinding$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27*), "System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::*)()>(&UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
