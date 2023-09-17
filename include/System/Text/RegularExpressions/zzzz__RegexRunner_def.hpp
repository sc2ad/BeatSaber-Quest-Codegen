#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Text::RegularExpressions {
class Match;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexRunner;
}
// Type: System.Text.RegularExpressions::RegexRunner
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7780))
// CS Name: System.Text.RegularExpressions.RegexRunner
class CORDL_TYPE RegexRunner : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~RegexRunner() = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexRunner", modifiers: " const&", def_value: None }]
constexpr RegexRunner(RegexRunner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexRunner", modifiers: "&&", def_value: None }]
constexpr RegexRunner(RegexRunner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RegexRunner(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RegexRunner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RegexRunner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RegexRunner& operator=(RegexRunner&& o) noexcept = default;
  constexpr RegexRunner& operator=(RegexRunner const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_runtextbeg, put=__set_runtextbeg))  runtextbeg;

constexpr void __set_runtextbeg(int32_t value) ;

constexpr int32_t __get_runtextbeg() const;

 int32_t __declspec(property(get=__get_runtextend, put=__set_runtextend))  runtextend;

constexpr void __set_runtextend(int32_t value) ;

constexpr int32_t __get_runtextend() const;

 int32_t __declspec(property(get=__get_runtextstart, put=__set_runtextstart))  runtextstart;

constexpr void __set_runtextstart(int32_t value) ;

constexpr int32_t __get_runtextstart() const;

 ::StringW __declspec(property(get=__get_runtext, put=__set_runtext))  runtext;

constexpr void __set_runtext(::StringW value) ;

constexpr ::StringW __get_runtext() const;

 int32_t __declspec(property(get=__get_runtextpos, put=__set_runtextpos))  runtextpos;

constexpr void __set_runtextpos(int32_t value) ;

constexpr int32_t __get_runtextpos() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_runtrack, put=__set_runtrack))  runtrack;

constexpr void __set_runtrack(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_runtrack() const;

 int32_t __declspec(property(get=__get_runtrackpos, put=__set_runtrackpos))  runtrackpos;

constexpr void __set_runtrackpos(int32_t value) ;

constexpr int32_t __get_runtrackpos() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_runstack, put=__set_runstack))  runstack;

constexpr void __set_runstack(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_runstack() const;

 int32_t __declspec(property(get=__get_runstackpos, put=__set_runstackpos))  runstackpos;

constexpr void __set_runstackpos(int32_t value) ;

constexpr int32_t __get_runstackpos() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_runcrawl, put=__set_runcrawl))  runcrawl;

constexpr void __set_runcrawl(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_runcrawl() const;

 int32_t __declspec(property(get=__get_runcrawlpos, put=__set_runcrawlpos))  runcrawlpos;

constexpr void __set_runcrawlpos(int32_t value) ;

constexpr int32_t __get_runcrawlpos() const;

 int32_t __declspec(property(get=__get_runtrackcount, put=__set_runtrackcount))  runtrackcount;

constexpr void __set_runtrackcount(int32_t value) ;

constexpr int32_t __get_runtrackcount() const;

 ::System::Text::RegularExpressions::Match __declspec(property(get=__get_runmatch, put=__set_runmatch))  runmatch;

constexpr void __set_runmatch(::System::Text::RegularExpressions::Match value) ;

constexpr ::System::Text::RegularExpressions::Match __get_runmatch() const;

 ::System::Text::RegularExpressions::Regex __declspec(property(get=__get_runregex, put=__set_runregex))  runregex;

constexpr void __set_runregex(::System::Text::RegularExpressions::Regex value) ;

constexpr ::System::Text::RegularExpressions::Regex __get_runregex() const;

 int32_t __declspec(property(get=__get__timeout, put=__set__timeout))  _timeout;

constexpr void __set__timeout(int32_t value) ;

constexpr int32_t __get__timeout() const;

 bool __declspec(property(get=__get__ignoreTimeout, put=__set__ignoreTimeout))  _ignoreTimeout;

constexpr void __set__ignoreTimeout(bool value) ;

constexpr bool __get__ignoreTimeout() const;

 int32_t __declspec(property(get=__get__timeoutOccursAt, put=__set__timeoutOccursAt))  _timeoutOccursAt;

constexpr void __set__timeoutOccursAt(int32_t value) ;

constexpr int32_t __get__timeoutOccursAt() const;

/// @brief Field TimeoutCheckFrequency offset 0
static constexpr int32_t  TimeoutCheckFrequency{1000};

 int32_t __declspec(property(get=__get__timeoutChecksToSkip, put=__set__timeoutChecksToSkip))  _timeoutChecksToSkip;

constexpr void __set__timeoutChecksToSkip(int32_t value) ;

constexpr int32_t __get__timeoutChecksToSkip() const;


// Methods

// Ctor Parameters []
explicit RegexRunner() ;

/// @brief Method .ctor addr 0x27cce14 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Scan addr 0x27d698c size 0x304 virtual false final false
 ::System::Text::RegularExpressions::Match Scan(::System::Text::RegularExpressions::Regex regex, ::StringW text, int32_t textbeg, int32_t textend, int32_t textstart, int32_t prevlen, bool quick, ::System::TimeSpan timeout) ;

/// @brief Method StartTimeoutWatch addr 0x27d6c90 size 0x34 virtual false final false
 void StartTimeoutWatch() ;

/// @brief Method CheckTimeout addr 0x27ceee4 size 0x10 virtual false final false
 void CheckTimeout() ;

/// @brief Method DoCheckTimeout addr 0x27d6ee4 size 0xd4 virtual false final false
 void DoCheckTimeout() ;

/// @brief Method Go addr 0x0 size 0xffffffffffffffff virtual true final false
 void Go() ;

/// @brief Method FindFirstChar addr 0x0 size 0xffffffffffffffff virtual true final false
 bool FindFirstChar() ;

/// @brief Method InitTrackCount addr 0x0 size 0xffffffffffffffff virtual true final false
 void InitTrackCount() ;

/// @brief Method InitMatch addr 0x27d6cc4 size 0x1dc virtual false final false
 void InitMatch() ;

/// @brief Method TidyMatch addr 0x27d6ea0 size 0x44 virtual false final false
 ::System::Text::RegularExpressions::Match TidyMatch(bool quick) ;

/// @brief Method EnsureStorage addr 0x27ccf38 size 0x48 virtual false final false
 void EnsureStorage() ;

/// @brief Method IsBoundary addr 0x27cf0dc size 0xf8 virtual false final false
 bool IsBoundary(int32_t index, int32_t startpos, int32_t endpos) ;

/// @brief Method IsECMABoundary addr 0x27cf1d4 size 0xf8 virtual false final false
 bool IsECMABoundary(int32_t index, int32_t startpos, int32_t endpos) ;

/// @brief Method DoubleTrack addr 0x27d7058 size 0xa0 virtual false final false
 void DoubleTrack() ;

/// @brief Method DoubleStack addr 0x27d6fb8 size 0xa0 virtual false final false
 void DoubleStack() ;

/// @brief Method DoubleCrawl addr 0x27d70f8 size 0xa0 virtual false final false
 void DoubleCrawl() ;

/// @brief Method Crawl addr 0x27d7198 size 0x5c virtual false final false
 void Crawl(int32_t i) ;

/// @brief Method Popcrawl addr 0x27d71f4 size 0x3c virtual false final false
 int32_t Popcrawl() ;

/// @brief Method Crawlpos addr 0x27cf0b8 size 0x24 virtual false final false
 int32_t Crawlpos() ;

/// @brief Method Capture addr 0x27cf028 size 0x60 virtual false final false
 void Capture(int32_t capnum, int32_t start, int32_t end) ;

/// @brief Method TransferCapture addr 0x27cef14 size 0x114 virtual false final false
 void TransferCapture(int32_t capnum, int32_t uncapnum, int32_t start, int32_t end) ;

/// @brief Method Uncapture addr 0x27cf088 size 0x30 virtual false final false
 void Uncapture() ;

/// @brief Method IsMatched addr 0x27ceef4 size 0x20 virtual false final false
 bool IsMatched(int32_t cap) ;

/// @brief Method MatchIndex addr 0x27cf2cc size 0x20 virtual false final false
 int32_t MatchIndex(int32_t cap) ;

/// @brief Method MatchLength addr 0x27cf2ec size 0x20 virtual false final false
 int32_t MatchLength(int32_t cap) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
} // end anonymous namespace
NEED_NO_BOX(::System::Text::RegularExpressions::RegexRunner);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexRunner, "System.Text.RegularExpressions", "RegexRunner");
