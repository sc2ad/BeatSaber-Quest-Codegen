// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SliderIntensityEffect
#include "GlobalNamespace/SliderIntensityEffect.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27*, "", "SliderIntensityEffect/<ProcessEffectCoroutine>d__27");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: SliderIntensityEffect/<ProcessEffectCoroutine>d__27
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SliderIntensityEffect::$ProcessEffectCoroutine$d__27 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Collections.Generic.IEnumerable`1<SliderIntensityEffect/FadeElement> fadeElements
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SliderIntensityEffect::FadeElement*>* fadeElements;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SliderIntensityEffect::FadeElement*>*) == 0x8);
    // public SliderIntensityEffect <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::SliderIntensityEffect* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SliderIntensityEffect*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<SliderIntensityEffect/FadeElement> <>7__wrap1
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::SliderIntensityEffect::FadeElement*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::SliderIntensityEffect::FadeElement*>*) == 0x8);
    // private SliderIntensityEffect/FadeElement <fadeElement>5__3
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::SliderIntensityEffect::FadeElement* $fadeElement$5__3;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SliderIntensityEffect::FadeElement*) == 0x8);
    // private System.Single <startTime>5__4
    // Size: 0x4
    // Offset: 0x40
    float $startTime$5__4;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Creating interface conversion operator: i_Il2CppObject
    inline ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* i_Il2CppObject() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public System.Collections.Generic.IEnumerable`1<SliderIntensityEffect/FadeElement> fadeElements
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SliderIntensityEffect::FadeElement*>*& dyn_fadeElements();
    // Get instance field reference: public SliderIntensityEffect <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SliderIntensityEffect*& dyn_$$4__this();
    // Get instance field reference: private System.Collections.Generic.IEnumerator`1<SliderIntensityEffect/FadeElement> <>7__wrap1
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::SliderIntensityEffect::FadeElement*>*& dyn_$$7__wrap1();
    // Get instance field reference: private SliderIntensityEffect/FadeElement <fadeElement>5__3
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SliderIntensityEffect::FadeElement*& dyn_$fadeElement$5__3();
    // Get instance field reference: private System.Single <startTime>5__4
    [[deprecated("Use field access instead!")]] float& dyn_$startTime$5__4();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x14700E0
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1470148
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x146FB8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SliderIntensityEffect::$ProcessEffectCoroutine$d__27* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SliderIntensityEffect::$ProcessEffectCoroutine$d__27*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x146FC64
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x146FD40
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x146FC80
    void $$m__Finally1();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x14700E8
    void System_Collections_IEnumerator_Reset();
  }; // SliderIntensityEffect/<ProcessEffectCoroutine>d__27
  #pragma pack(pop)
  static check_size<sizeof(SliderIntensityEffect::$ProcessEffectCoroutine$d__27), 64 + sizeof(float)> __GlobalNamespace_SliderIntensityEffect_$ProcessEffectCoroutine$d__27SizeCheck;
  static_assert(sizeof(SliderIntensityEffect::$ProcessEffectCoroutine$d__27) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27::*)()>(&GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27::*)()>(&GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27::*)()>(&GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27::*)()>(&GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27::*)()>(&GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27::*)()>(&GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderIntensityEffect::$ProcessEffectCoroutine$d__27*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
