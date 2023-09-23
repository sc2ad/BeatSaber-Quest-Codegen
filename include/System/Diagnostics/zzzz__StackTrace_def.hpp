#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class Type;
}
namespace System::Diagnostics {
class StackFrame;
}
namespace System::Reflection {
class MethodBase;
}
namespace System {
class Exception;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Diagnostics {
struct System__Diagnostics__StackTrace__TraceFormat;
}
namespace System::Diagnostics {
class StackTrace;
}
// Type: ::TraceFormat
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3725))
// CS Name: System.Diagnostics.StackTrace::TraceFormat
struct CORDL_TYPE System__Diagnostics__StackTrace__TraceFormat : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Diagnostics__StackTrace__TraceFormat(int32_t value__) noexcept;


                    constexpr System__Diagnostics__StackTrace__TraceFormat(System__Diagnostics__StackTrace__TraceFormat const&) = default;
                    constexpr System__Diagnostics__StackTrace__TraceFormat(System__Diagnostics__StackTrace__TraceFormat&&) = default;
                    constexpr System__Diagnostics__StackTrace__TraceFormat& operator=(System__Diagnostics__StackTrace__TraceFormat const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Diagnostics__StackTrace__TraceFormat& operator=(System__Diagnostics__StackTrace__TraceFormat&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Diagnostics__StackTrace__TraceFormat(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Diagnostics__StackTrace__TraceFormat_Unwrapped : int32_t {
__Normal = 0,
__TrailingNewLine = 1,
__NoResourceLookup = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Diagnostics__StackTrace__TraceFormat_Unwrapped () const noexcept {
return std::bit_cast<__System__Diagnostics__StackTrace__TraceFormat_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static System::Diagnostics::System__Diagnostics__StackTrace__TraceFormat const Normal;

/// @brief Field TrailingNewLine offset 0
static System::Diagnostics::System__Diagnostics__StackTrace__TraceFormat const TrailingNewLine;

/// @brief Field NoResourceLookup offset 0
static System::Diagnostics::System__Diagnostics__StackTrace__TraceFormat const NoResourceLookup;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Diagnostics
// Type: System.Diagnostics::StackTrace
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3726))
// CS Name: System.Diagnostics.StackTrace
class CORDL_TYPE StackTrace : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using TraceFormat = System::Diagnostics::System__Diagnostics__StackTrace__TraceFormat;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~StackTrace() = default;

// Ctor Parameters [CppParam { name: "", ty: "StackTrace", modifiers: " const&", def_value: None }]
constexpr StackTrace(StackTrace const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StackTrace", modifiers: "&&", def_value: None }]
constexpr StackTrace(StackTrace&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StackTrace(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StackTrace& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StackTrace& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StackTrace& operator=(StackTrace&& o) noexcept = default;
  constexpr StackTrace& operator=(StackTrace const& o) noexcept = default;
                


// Fields

/// @brief Field METHODS_TO_SKIP offset 0
static constexpr int32_t  METHODS_TO_SKIP{0};

/// @brief Field prefix offset 0
static constexpr ::ConstString  prefix{u"  at "};

 ::ArrayW<System::Diagnostics::StackFrame> __declspec(property(get=__get_frames, put=__set_frames))  frames;

constexpr void __set_frames(::ArrayW<System::Diagnostics::StackFrame> value) ;

constexpr ::ArrayW<System::Diagnostics::StackFrame> __get_frames() const;

 ::ArrayW<System::Diagnostics::StackTrace> __declspec(property(get=__get_captured_traces, put=__set_captured_traces))  captured_traces;

constexpr void __set_captured_traces(::ArrayW<System::Diagnostics::StackTrace> value) ;

constexpr ::ArrayW<System::Diagnostics::StackTrace> __get_captured_traces() const;

 bool __declspec(property(get=__get_debug_info, put=__set_debug_info))  debug_info;

constexpr void __set_debug_info(bool value) ;

constexpr bool __get_debug_info() const;

static bool __declspec(property(get=__get_isAotidSet, put=__set_isAotidSet))  isAotidSet;

static void __set_isAotidSet(bool value) ;

static bool __get_isAotidSet() ;

static ::StringW __declspec(property(get=__get_aotid, put=__set_aotid))  aotid;

static void __set_aotid(::StringW value) ;

static ::StringW __get_aotid() ;


// Properties

 int32_t __declspec(property(get=get_FrameCount))  FrameCount;


// Methods

// Ctor Parameters []
explicit StackTrace() ;

/// @brief Method .ctor addr 0x240c62c size 0x24 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "fNeedFileInfo", ty: "bool", modifiers: "", def_value: None }]
explicit StackTrace(bool fNeedFileInfo) ;

/// @brief Method .ctor addr 0x240c84c size 0x30 virtual false final false
 void _ctor(bool fNeedFileInfo) ;

// Ctor Parameters [CppParam { name: "skipFrames", ty: "int32_t", modifiers: "", def_value: None }]
explicit StackTrace(int32_t skipFrames) ;

/// @brief Method .ctor addr 0x240c87c size 0x30 virtual false final false
 void _ctor(int32_t skipFrames) ;

// Ctor Parameters [CppParam { name: "skipFrames", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fNeedFileInfo", ty: "bool", modifiers: "", def_value: None }]
explicit StackTrace(int32_t skipFrames, bool fNeedFileInfo) ;

/// @brief Method .ctor addr 0x240c8ac size 0x34 virtual false final false
 void _ctor(int32_t skipFrames, bool fNeedFileInfo) ;

/// @brief Method init_frames addr 0x240c650 size 0x1fc virtual false final false
 void init_frames(int32_t skipFrames, bool fNeedFileInfo) ;

/// @brief Method get_trace addr 0x240c8e0 size 0x8 virtual false final false
static ::ArrayW<System::Diagnostics::StackFrame> get_trace(System::Exception e, int32_t skipFrames, bool fNeedFileInfo) ;

// Ctor Parameters [CppParam { name: "e", ty: "System::Exception", modifiers: "", def_value: None }, CppParam { name: "fNeedFileInfo", ty: "bool", modifiers: "", def_value: None }]
explicit StackTrace(System::Exception e, bool fNeedFileInfo) ;

/// @brief Method .ctor addr 0x240c8e8 size 0xc virtual false final false
 void _ctor(System::Exception e, bool fNeedFileInfo) ;

// Ctor Parameters [CppParam { name: "e", ty: "System::Exception", modifiers: "", def_value: None }, CppParam { name: "skipFrames", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fNeedFileInfo", ty: "bool", modifiers: "", def_value: None }]
explicit StackTrace(System::Exception e, int32_t skipFrames, bool fNeedFileInfo) ;

/// @brief Method .ctor addr 0x240c8f4 size 0xf0 virtual false final false
 void _ctor(System::Exception e, int32_t skipFrames, bool fNeedFileInfo) ;

/// @brief Method get_FrameCount addr 0x240c9e4 size 0x18 virtual true final false
 int32_t get_FrameCount() ;

/// @brief Method GetFrame addr 0x240c9fc size 0x60 virtual true final false
 System::Diagnostics::StackFrame GetFrame(int32_t index) ;

/// @brief Method GetAotId addr 0x240ca5c size 0xc8 virtual false final false
static ::StringW GetAotId() ;

/// @brief Method AddFrames addr 0x240cb24 size 0x4b0 virtual false final false
 bool AddFrames(System::Text::StringBuilder sb, bool separator, ByRef<bool> isAsync) ;

/// @brief Method GetFullNameForStackTrace addr 0x240cfd4 size 0x658 virtual false final false
 void GetFullNameForStackTrace(System::Text::StringBuilder sb, System::Reflection::MethodBase mi, bool needsNewLine, ByRef<bool> skipped, ByRef<bool> isAsync) ;

/// @brief Method ConvertAsyncStateMachineMethod addr 0x240d62c size 0x460 virtual false final false
static void ConvertAsyncStateMachineMethod(ByRef<System::Reflection::MethodBase> method, ByRef<System::Type> declaringType) ;

/// @brief Method ToString addr 0x240da8c size 0x15c virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x240dbe8 size 0xc virtual false final false
 ::StringW ToString(System::Diagnostics::System__Diagnostics__StackTrace__TraceFormat traceFormat) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::System__Diagnostics__StackTrace__TraceFormat, "System.Diagnostics", "StackTrace/TraceFormat");
NEED_NO_BOX(System::Diagnostics::StackTrace);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::StackTrace, "System.Diagnostics", "StackTrace");
