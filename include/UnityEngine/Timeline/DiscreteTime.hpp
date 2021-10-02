// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.Double
#include "System/Double.hpp"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Timeline.DiscreteTime
  // [TokenAttribute] Offset: FFFFFFFF
  struct DiscreteTime/*, public System::ValueType, public System::IComparable*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private readonly System.Int64 m_DiscreteTime
    // Size: 0x8
    // Offset: 0x0
    int64_t m_DiscreteTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating value type constructor for type: DiscreteTime
    constexpr DiscreteTime(int64_t m_DiscreteTime_ = {}) noexcept : m_DiscreteTime{m_DiscreteTime_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // Creating conversion operator: operator int64_t
    constexpr operator int64_t() const noexcept {
      return m_DiscreteTime;
    }
    // static field const value: static private System.Double k_Tick
    static constexpr const double k_Tick = 1e-12;
    // Get static field: static private System.Double k_Tick
    static double _get_k_Tick();
    // Set static field: static private System.Double k_Tick
    static void _set_k_Tick(double value);
    // Get static field: static public readonly UnityEngine.Timeline.DiscreteTime kMaxTime
    static UnityEngine::Timeline::DiscreteTime _get_kMaxTime();
    // Set static field: static public readonly UnityEngine.Timeline.DiscreteTime kMaxTime
    static void _set_kMaxTime(UnityEngine::Timeline::DiscreteTime value);
    // Get instance field reference: private readonly System.Int64 m_DiscreteTime
    int64_t& dyn_m_DiscreteTime();
    // static public System.Double get_tickValue()
    // Offset: 0x19FA268
    static double get_tickValue();
    // public System.Void .ctor(UnityEngine.Timeline.DiscreteTime time)
    // Offset: 0x19FA284
    // ABORTED: is copy constructor.  DiscreteTime(UnityEngine::Timeline::DiscreteTime time);
    // private System.Void .ctor(System.Int64 time)
    // Offset: 0x19FA28C
    // ABORTED: conflicts with another method.  DiscreteTime(int64_t time);
    // public System.Void .ctor(System.Double time)
    // Offset: 0x19FA294
    DiscreteTime(double time);
    // public System.Void .ctor(System.Single time)
    // Offset: 0x19FA3DC
    DiscreteTime(float time);
    // public System.Void .ctor(System.Int32 time)
    // Offset: 0x19FA528
    DiscreteTime(int time);
    // public System.Void .ctor(System.Int32 frame, System.Double fps)
    // Offset: 0x19FA604
    DiscreteTime(int frame, double fps);
    // static private System.Void .cctor()
    // Offset: 0x19FAC7C
    static void _cctor();
    // public UnityEngine.Timeline.DiscreteTime OneTickBefore()
    // Offset: 0x19FA68C
    UnityEngine::Timeline::DiscreteTime OneTickBefore();
    // public UnityEngine.Timeline.DiscreteTime OneTickAfter()
    // Offset: 0x19F7B28
    UnityEngine::Timeline::DiscreteTime OneTickAfter();
    // public System.Int64 GetTick()
    // Offset: 0x19FA698
    int64_t GetTick();
    // static public UnityEngine.Timeline.DiscreteTime FromTicks(System.Int64 ticks)
    // Offset: 0x19FA6A0
    static UnityEngine::Timeline::DiscreteTime FromTicks(int64_t ticks);
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0x19FA6A4
    int CompareTo(::Il2CppObject* obj);
    // public System.Boolean Equals(UnityEngine.Timeline.DiscreteTime other)
    // Offset: 0x19FA738
    bool Equals(UnityEngine::Timeline::DiscreteTime other);
    // static private System.Int64 DoubleToDiscreteTime(System.Double time)
    // Offset: 0x19FA30C
    static int64_t DoubleToDiscreteTime(double time);
    // static private System.Int64 FloatToDiscreteTime(System.Single time)
    // Offset: 0x19FA454
    static int64_t FloatToDiscreteTime(float time);
    // static private System.Int64 IntToDiscreteTime(System.Int32 time)
    // Offset: 0x19FA5A0
    static int64_t IntToDiscreteTime(int time);
    // static private System.Double ToDouble(System.Int64 time)
    // Offset: 0x19FA7D0
    static double ToDouble(int64_t time);
    // static private System.Single ToFloat(System.Int64 time)
    // Offset: 0x19FA7E4
    static float ToFloat(int64_t time);
    // static public System.Double op_Explicit(UnityEngine.Timeline.DiscreteTime b)
    // Offset: 0x19F7B34
    explicit operator double();
    // static public System.Single op_Explicit(UnityEngine.Timeline.DiscreteTime b)
    // Offset: 0x19FA858
    explicit operator float();
    // static public System.Int64 op_Explicit(UnityEngine.Timeline.DiscreteTime b)
    // Offset: 0x19FA8BC
    // ABORTED: conflicts with another method.  explicit operator int64_t();
    // static public UnityEngine.Timeline.DiscreteTime op_Explicit(System.Double time)
    // Offset: 0x19F7B00
    explicit DiscreteTime(double& time);
    // static public UnityEngine.Timeline.DiscreteTime op_Explicit(System.Single time)
    // Offset: 0x19FA8C0
    explicit DiscreteTime(float& time);
    // static public UnityEngine.Timeline.DiscreteTime op_Explicit(System.Int64 time)
    // Offset: 0x19FA914
    explicit DiscreteTime(int64_t& time);
    // static public UnityEngine.Timeline.DiscreteTime Min(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
    // Offset: 0x19FAA30
    static UnityEngine::Timeline::DiscreteTime Min(UnityEngine::Timeline::DiscreteTime lhs, UnityEngine::Timeline::DiscreteTime rhs);
    // static public UnityEngine.Timeline.DiscreteTime Max(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
    // Offset: 0x19FAAA8
    static UnityEngine::Timeline::DiscreteTime Max(UnityEngine::Timeline::DiscreteTime lhs, UnityEngine::Timeline::DiscreteTime rhs);
    // static public System.Double SnapToNearestTick(System.Double time)
    // Offset: 0x19FAB20
    static double SnapToNearestTick(double time);
    // static public System.Single SnapToNearestTick(System.Single time)
    // Offset: 0x19FABA0
    static float SnapToNearestTick(float time);
    // static public System.Int64 GetNearestTick(System.Double time)
    // Offset: 0x19FAC10
    static int64_t GetNearestTick(double time);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x19FA748
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.String ToString()
    // Offset: 0x19FA9D8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0x19FAA04
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Timeline.DiscreteTime
  #pragma pack(pop)
  static check_size<sizeof(DiscreteTime), 0 + sizeof(int64_t)> __UnityEngine_Timeline_DiscreteTimeSizeCheck;
  static_assert(sizeof(DiscreteTime) == 0x8);
  // static public System.Boolean op_Equality(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
  // Offset: 0x19FA918
  bool operator ==(const UnityEngine::Timeline::DiscreteTime& lhs, const UnityEngine::Timeline::DiscreteTime& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
  // Offset: 0x19FA924
  bool operator !=(const UnityEngine::Timeline::DiscreteTime& lhs, const UnityEngine::Timeline::DiscreteTime& rhs);
  // static public System.Boolean op_GreaterThan(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
  // Offset: 0x19FA998
  bool operator >(const UnityEngine::Timeline::DiscreteTime& lhs, const UnityEngine::Timeline::DiscreteTime& rhs);
  // static public System.Boolean op_LessThan(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
  // Offset: 0x19FA9A4
  bool operator <(const UnityEngine::Timeline::DiscreteTime& lhs, const UnityEngine::Timeline::DiscreteTime& rhs);
  // static public System.Boolean op_LessThanOrEqual(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
  // Offset: 0x19FA9B0
  bool operator <=(const UnityEngine::Timeline::DiscreteTime& lhs, const UnityEngine::Timeline::DiscreteTime& rhs);
  // static public System.Boolean op_GreaterThanOrEqual(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
  // Offset: 0x19FA9BC
  bool operator >=(const UnityEngine::Timeline::DiscreteTime& lhs, const UnityEngine::Timeline::DiscreteTime& rhs);
  // static public UnityEngine.Timeline.DiscreteTime op_Addition(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
  // Offset: 0x19FA9C8
  UnityEngine::Timeline::DiscreteTime operator+(const UnityEngine::Timeline::DiscreteTime& lhs, const UnityEngine::Timeline::DiscreteTime& rhs);
  // static public UnityEngine.Timeline.DiscreteTime op_Subtraction(UnityEngine.Timeline.DiscreteTime lhs, UnityEngine.Timeline.DiscreteTime rhs)
  // Offset: 0x19FA9D0
  UnityEngine::Timeline::DiscreteTime operator-(const UnityEngine::Timeline::DiscreteTime& lhs, const UnityEngine::Timeline::DiscreteTime& rhs);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::DiscreteTime, "UnityEngine.Timeline", "DiscreteTime");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::get_tickValue
// Il2CppName: get_tickValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)()>(&UnityEngine::Timeline::DiscreteTime::get_tickValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "get_tickValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::DiscreteTime
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::DiscreteTime
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::DiscreteTime
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::DiscreteTime
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::DiscreteTime
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::DiscreteTime
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Timeline::DiscreteTime::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::OneTickBefore
// Il2CppName: OneTickBefore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::DiscreteTime (UnityEngine::Timeline::DiscreteTime::*)()>(&UnityEngine::Timeline::DiscreteTime::OneTickBefore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "OneTickBefore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::OneTickAfter
// Il2CppName: OneTickAfter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::DiscreteTime (UnityEngine::Timeline::DiscreteTime::*)()>(&UnityEngine::Timeline::DiscreteTime::OneTickAfter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "OneTickAfter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::GetTick
// Il2CppName: GetTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::Timeline::DiscreteTime::*)()>(&UnityEngine::Timeline::DiscreteTime::GetTick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "GetTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::FromTicks
// Il2CppName: FromTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::DiscreteTime (*)(int64_t)>(&UnityEngine::Timeline::DiscreteTime::FromTicks)> {
  static const MethodInfo* get() {
    static auto* ticks = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "FromTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ticks});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Timeline::DiscreteTime::*)(::Il2CppObject*)>(&UnityEngine::Timeline::DiscreteTime::CompareTo)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::DiscreteTime::*)(UnityEngine::Timeline::DiscreteTime)>(&UnityEngine::Timeline::DiscreteTime::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "DiscreteTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::DoubleToDiscreteTime
// Il2CppName: DoubleToDiscreteTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(double)>(&UnityEngine::Timeline::DiscreteTime::DoubleToDiscreteTime)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "DoubleToDiscreteTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::FloatToDiscreteTime
// Il2CppName: FloatToDiscreteTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(float)>(&UnityEngine::Timeline::DiscreteTime::FloatToDiscreteTime)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "FloatToDiscreteTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::IntToDiscreteTime
// Il2CppName: IntToDiscreteTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int)>(&UnityEngine::Timeline::DiscreteTime::IntToDiscreteTime)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "IntToDiscreteTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::ToDouble
// Il2CppName: ToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(int64_t)>(&UnityEngine::Timeline::DiscreteTime::ToDouble)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "ToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::ToFloat
// Il2CppName: ToFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(int64_t)>(&UnityEngine::Timeline::DiscreteTime::ToFloat)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "ToFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::operator double
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::operator float
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::operator int64_t
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::DiscreteTime
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::DiscreteTime
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::DiscreteTime
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::Min
// Il2CppName: Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::DiscreteTime (*)(UnityEngine::Timeline::DiscreteTime, UnityEngine::Timeline::DiscreteTime)>(&UnityEngine::Timeline::DiscreteTime::Min)> {
  static const MethodInfo* get() {
    static auto* lhs = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "DiscreteTime")->byval_arg;
    static auto* rhs = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "DiscreteTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lhs, rhs});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::DiscreteTime (*)(UnityEngine::Timeline::DiscreteTime, UnityEngine::Timeline::DiscreteTime)>(&UnityEngine::Timeline::DiscreteTime::Max)> {
  static const MethodInfo* get() {
    static auto* lhs = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "DiscreteTime")->byval_arg;
    static auto* rhs = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "DiscreteTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lhs, rhs});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::SnapToNearestTick
// Il2CppName: SnapToNearestTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double)>(&UnityEngine::Timeline::DiscreteTime::SnapToNearestTick)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "SnapToNearestTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::SnapToNearestTick
// Il2CppName: SnapToNearestTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&UnityEngine::Timeline::DiscreteTime::SnapToNearestTick)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "SnapToNearestTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::GetNearestTick
// Il2CppName: GetNearestTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(double)>(&UnityEngine::Timeline::DiscreteTime::GetNearestTick)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "GetNearestTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::DiscreteTime::*)(::Il2CppObject*)>(&UnityEngine::Timeline::DiscreteTime::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Timeline::DiscreteTime::*)()>(&UnityEngine::Timeline::DiscreteTime::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Timeline::DiscreteTime::*)()>(&UnityEngine::Timeline::DiscreteTime::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::DiscreteTime), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::operator >
// Il2CppName: op_GreaterThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::operator <
// Il2CppName: op_LessThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::operator <=
// Il2CppName: op_LessThanOrEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::operator >=
// Il2CppName: op_GreaterThanOrEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::DiscreteTime::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
